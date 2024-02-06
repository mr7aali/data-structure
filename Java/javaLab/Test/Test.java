package Java.javaLab.Test;

class A {
    int a;
    A() {
        a = 0;
    }

    A(int a) {
        this.a = a;
    }
}
class B extends A {
    int b;
    B() {
        b = 0;
    }

    B(int b) {
        super(b);
        this.b = b;
    }
}
class C extends B {
    int c;
    C() {
        c = 0;
    }

    C(int c) {
        super(c);
        this.c = c;
    }
}
public class Test {
    public static void main(String[] args) {
        C obj = new C(5);
        System.out.println(obj.a);
    }
}
