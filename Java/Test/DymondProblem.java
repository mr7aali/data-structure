package Java.Test;

interface A {
    void display();

}

interface B extends A {
    void display();
}

interface C extends A {
    void display();
}

class D implements B, C {
    public void display() {
        System.out.println("Display function called !");
    }
}

public class DymondProblem {
    public static void main(String[] args) {
        D d = new D();
        d.display();
    }
}
