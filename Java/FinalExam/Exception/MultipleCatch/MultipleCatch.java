package Java.FinalExam.Exception.MultipleCatch;

public class MultipleCatch {
    public static void main(String[] args) {
        try {
            int a = 42 / 0; // ArithmeticException
            int c[] = { 1 };
            c[4] = 3; // ArrayIndexOutOfBoundsException
        } catch (ArithmeticException e) {
            System.out.println(e);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
        } catch (Exception e) {
            System.out.println(e);
        } finally {
            System.out.println("code After try/catch block");
        }
    }
}
