package Java.FinalExam.Exception.CarEceptionMain;

import java.util.*;

class CarException extends Exception {
    int seat;

    CarException(int seat) {
        this.seat = seat;
    }
}

class Car {
    int seat_number;

    Car(int seat_number)
     throws CarException 
     {
        if (seat_number > 4) {
            throw new CarException(seat_number);
        } else {
            this.seat_number = seat_number;
            System.out.println("Total seat_number: " + seat_number);
        }
    }

}

public class CarEceptionMain {
    public static void main(String[] args) {
        try {

            Car c1 = new Car(9);
        } catch (CarException e) {
            System.out.println(e);
            System.out.println("Car seat number cannot be more than 4");

        }
    }
}