import heapq

def dijkstra(graph, source):
    distances = {node: float("inf") for node in graph}
    distances[source] = 0

    queue = [(0, source)]
    while queue:
        current_distance, current_node = heapq.heappop(queue)

        if current_distance > distances[current_node]:
            continue

        for neighbor, edge_weight in graph[current_node].items():
            new_distance = current_distance + edge_weight
            if new_distance < distances[neighbor]:
                distances[neighbor] = new_distance
                heapq.heappush(queue, (new_distance, neighbor))

    return distances

if __name__ == "__main":
    # Read the input
    num_locations, num_roads = map(int, input().split())

    graph = {}
    for _ in range(num_roads):
        a, b, t = map(int, input().split())
        if a not in graph:
            graph[a] = {}
        graph[a][b] = t
        if b not in graph:
            graph[b] = {}
        graph[b][a] = t

    pizza_location = int(input())

    # Find the shortest path from the pizza shop to all other locations
    distances = dijkstra(graph, pizza_location)

    # Calculate the total delivery time
    total_time = sum(distances.values())

    # Print the total delivery time
    print(total_time)
