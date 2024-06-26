package Java.FinalExam.ExceptionHandleing;

class CustomException extends Exception {
    CustomException(String message) {
        super(message);
    }

}

public class ExceptionHandleing {
    public static void main(String[] args) {
        int a = 67;
        int b = 3;

        // int c = a / b;
        // System.out.println(c);
        try {
            int c = a / b;
            System.out.println(c);
        } catch (ArithmeticException e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println("Program has been executed");
        }
    }
}
