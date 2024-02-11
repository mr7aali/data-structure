package Java.Test;

interface A {
    void display();

}

interface B extends A {

}

interface C extends A {

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
