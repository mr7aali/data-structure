package Java.javaLab.task2.AddTowComplexNumber;
import java.util.Scanner;

class Complex {
    int real;
    int imaginary;
    Scanner userInput = new Scanner(System.in);

    Complex() {
        System.out.print("Enter real and imaginary numbers respectively : ");
        real = userInput.nextInt();
        imaginary = userInput.nextInt();
    }
    // Complex(Complex obj) {
    //     this.real = this.real + obj.real;
    //     this.imaginary = this.imaginary + obj.imaginary;
    //     System.out.println("Sum = " + real + "+" + imaginary + "i");
    // }
    void addTowNumber(Complex obj) {
        this.real = this.real + obj.real;
        this.imaginary = this.imaginary + obj.imaginary;
        System.out.println("Sum = " + real + " + " + imaginary + "i");
    }
}
public class AddTowComplexNumber {
    public static void main(String[] args) {
        Complex num1 = new Complex();
        Complex num2 = new Complex();
        // Complex num2 = new Complex(num1);
       num2.addTowNumber(num1);
    }
}
