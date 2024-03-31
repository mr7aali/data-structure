
package Java.FinalExam.Exception.CustomeEception;

import java.io.*;

class InsufficientFundsException extends Exception {
    private double amount;

    InsufficientFundsException(double amount) {
        this.amount = amount;
    }

    double getAmount() {
        return amount;
    }
}

class CheckingAccount {
    private double balance;
    private int number;

    CheckingAccount(int number) {
        this.number = number;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) throws InsufficientFundsException {
        if (amount <= balance) {
            balance -= amount;
        } else {
            double needs = amount - balance;
            throw new InsufficientFundsException(needs);
        }
    }

    double getBalance() {
        return balance;
    }

    int getNumber() {
        return number;
    }
}

public class CustomeEception {

    /**
     * @param args the command line arguments
     */

    public static void main(String[] args) {
        // TODO code application logic here
        CheckingAccount c = new CheckingAccount(101);
        c.deposit(500);
        try {
            c.withdraw(100);
            c.withdraw(600);
        } catch (InsufficientFundsException e) {
            System.out.println(e.toString());
            System.out.println("Sorry but you are short : " + e.getAmount());
        }
    }

}