package Java.javaLab.task2.PalindromeChecker;

import java.util.Scanner;

class PalindromeChecker {
    int number;

    PalindromeChecker() {
        this.number = 0;
    }

    void getInput() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        this.number = scanner.nextInt();
        System.out.println(this.number);
    }

    void isPalindrome() {
        int reversedNumber = 0;
        int originalNumber = this.number;

        while (originalNumber != 0) {
            int digit = originalNumber % 10;
            reversedNumber = reversedNumber * 10 + digit;
            originalNumber /= 10;
        }
        
        if (this.number == reversedNumber) {
            System.out.println("The number is palindrome!");
        } else {
            System.out.println("The number is not palindrome!");
        }
    }

    public static void main(String[] args) {
        PalindromeChecker num = new PalindromeChecker();
        // palindromeChecker.getInput();
        // palindromeChecker.isPalindrome();
        num.getInput();
        num.isPalindrome();

    }
}
