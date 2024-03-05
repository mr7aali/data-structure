package Java.Test;

class Animal {
    String type;

    Animal() {
    }

    Animal(String type) {
        this.type = type;
    }

    void Display_info() {
        System.out.println("Type " + type);
    }
}

class Bird extends Animal {
    String Color;

    Bird() {
    }

    Bird(String type, String Color) {
        super(type);
        this.Color = Color;
    }

    void Display_info() {
        // System.out.println("Type " + type);
        super.Display_info();
        System.out.println("Color " + this.Color);
    }
}

class Parrat extends Bird {
    String number;

    Parrat() {
    }

    Parrat(String type, String Color, String num) {
        super(type, Color);
        this.number = num;
    }

    void Display_info() {
        // System.out.println("Type " + type);
        // System.out.println("Color " + Color);
        super.Display_info();
        System.out.println("number " + number);
    }
}

public class SingleInheritance {

    public static void main(String[] args) {
        Parrat p = new Parrat("X", "red", "10");
        p.Display_info();
    }
}
