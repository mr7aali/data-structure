package Java.javaLab.task1.SelectionSort;

public class SelectionSort {
    public static void main(String[] args) {
        int[] numbers = { 1, 0, 2, 3, 10, 45, 78, 1, 2, 3, 5, 80 };
        int numbers_length = numbers.length;

        for (int i = 0; i < numbers_length; i++) {
            for (int j = i; j < numbers_length; j++) {
                if (numbers[i] > numbers[j]) {
                    int tem = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = tem;
                }
            }
        }
        System.out.print("Sorted array");
        for (int i = 0; i < numbers_length; i++) {
            System.out.print(" " + numbers[i]);
        }
    }
}
