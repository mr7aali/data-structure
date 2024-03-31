package Java.FinalExam.Exception.ThrowsKeyword;

import java.io.IOException;

class HelloWorld {

    public static void method() throws IOException {
        System.out.println("Exception caught");
    }

    public static void main(String[] args) {
        try {
            method();
        } catch (IOException e) {
            System.out.println("Exception handled");
        }

    }
}