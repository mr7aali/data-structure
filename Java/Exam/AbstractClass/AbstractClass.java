package Java.Exam.AbstractClass;

abstract class A {
    static int a = 10;

    abstract void test();

    static void test2() {
        System.out.println("the value is " + a);
    }
}

class B extends A {

    void test() {
        System.out.println("Test are called from B");
    }
}

public class AbstractClass {
    public static void main(String[] args) {
        // B obj = new B();
        // obj.test();
        // System.out.println(;
        A.test2();

    }
}
