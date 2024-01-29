package Java.javaLab.task2.FoodPanda;

public class FoodPanda {
    void Orderfood(String f1, int q1, String f2, int q2) {
        System.out.println("Order placed for " + q1 + " " + f1 + " and " + q2 + " " + f2);
    }

    void Orderfood(String f1, int q1, String f2, int q2, String f3, int q3) {
        System.out.println("Order placed for " + q1 + " " + f1 + ", " + q2 + " " + f2 +
                ", and " + q3 + " " + f3);
    }

    void Orderfood(String f1, int q1, String f2, int q2, String f3, int q3,
            String f4, int q4) {
        System.out.println("Order placed for " + q1 + " " + f1 + ", " + q2 + " " + f2 +
                ", " + q3 + " " + f3 + ", and " + q4 + " " + f4);
    }

    public static void main(String[] args) {
        FoodPanda myOrder = new FoodPanda();
        myOrder.Orderfood("Test", 1, "test", 0);
        myOrder.Orderfood("Pizza", 2, "Burger", 3);
        myOrder.Orderfood("Sushi", 1, "Pasta", 2, "Salad", 1);
    }
}
