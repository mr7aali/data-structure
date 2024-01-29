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

    Complex(Complex obj) {
    this.real = this.real + obj.real;
    this.imaginary = this.imaginary + obj.imaginary;
    System.out.println("Sum = " + real + "+" + imaginary + "i");
    }
    Complex(int real, int imaginary) {
        this.real = real;
        this.imaginary = imaginary;

    }

    Complex add(Complex obj) {
        // this.real = this.real + obj.real;
        // this.imaginary = this.imaginary + obj.imaginary;
        // System.out.println("Sum = " + real + " + " + imaginary + "i");
        return new Complex(this.real + obj.real, this.imaginary + obj.imaginary);
    }

    void read() {
        System.out.println("Sum = " + this.real + "+" + this.imaginary + "i");
    }
}

public class AddTowComplexNumber {
    public static void main(String[] args) {
        Complex num1 = new Complex();
        Complex num2 = new Complex();
        // Complex testNum = new Complex(num1);
        // Complex num3 = new Complex(num1);
        Complex result = num2.add(num1);
        result.read();
        
    }
}
