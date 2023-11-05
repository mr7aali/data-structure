#include <iostream>
using namespace std;
// To heapify a subtree rooted with node i, which is an index in arr[]
// n is the size of the heap
void heapify(int arr[], int n, int i) {
    int largest = i; // Initialize largest as the root
    int left = 2 * i + 1; // left child
    int right = 2 * i + 2; // right child

    // If the left child is larger than the root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If the right child is larger than the current largest
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If the largest is not the root
    if (largest != i) {
        // Swap the largest with the root
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// Heap sort function
void heapSort(int arr[], int n) {
    // Build the max-heap (rearrange the array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements one by one from the max-heap
    for (int i = n - 1; i > 0; i--) {
        // Move the current root to the end
        swap(arr[0], arr[i]);

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
       cout << "\n";
}

int main() {
    int arr[] = {40, 20, 30, 5, 15, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

       cout << "Original array: ";
    printArray(arr, n);

    //heapSort(arr, n);
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
