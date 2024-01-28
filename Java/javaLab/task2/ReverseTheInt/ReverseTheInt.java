package Java.javaLab.task2.ReverseTheInt;

import java.util.Scanner;

class Reverse {
    int num;

    void getInput() {
        Scanner userInput = new Scanner(System.in);
        System.out.print("Inter the number : ");
        this.num = userInput.nextInt();
    }

    void doReverse() {
        int reversedNumber = 0;
        int originalNumber = this.num;

        while (originalNumber != 0) {
            int digit = originalNumber % 10;
            reversedNumber = reversedNumber * 10 + digit;
            originalNumber /= 10;
        }

        System.out.println("Reversed number: " + reversedNumber);
    }
}

public class ReverseTheInt {
  public static void main(String[] args){
    Reverse num1 = new Reverse();
    num1.getInput();
    num1.doReverse();
  }
}