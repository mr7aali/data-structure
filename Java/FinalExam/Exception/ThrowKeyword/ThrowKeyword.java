package Java.FinalExam.Exception.ThrowKeyword;

public class ThrowKeyword {
    public static void validate(int age) {
        if (age < 18) {
            throw new ArithmeticException("Not eligible");// throw an Exception
        } else {
            System.out.println("Eligible");
        }
    }

    public static void main(String args[]) {
        validate(13);
    }
}
