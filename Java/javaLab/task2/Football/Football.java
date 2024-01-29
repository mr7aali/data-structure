package Java.javaLab.task2.Football;

public class Football {
    int weight;
    int radius;

    Football() {
        weight = 2;
        radius = 1;
    }

    Football(int radius, int weight) {
        this.radius = radius;
        this.weight = weight;
    }

    void display() {
        System.out.println("Details of obj : ");
        System.out.println("weight = " + weight);
        System.out.println("radius = " + radius);
    }

    public static void main(String[] agrs) {
        Football obj1 = new Football(10, 20);
        Football obj2 = new Football();

        obj1.display();
        obj2.display();
    }

}
