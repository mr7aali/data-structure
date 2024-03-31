package Java.FinalExam.Test;



public class Test {
    public static void main(String args[]) {
        try {
            // String str = "23409769867";
            // int number = Integer.parseInt(str);
            // System.out.println("Number is " + number);
            Class.forName("Fuck");
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
