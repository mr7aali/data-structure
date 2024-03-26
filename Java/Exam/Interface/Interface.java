package Java.Exam.Interface;

interface A {
    int a = 10;

    void a();
}

interface B extends A {
    void b();
}

class C implements B {
    @Override
    public void a() {
        // TODO Auto-generated method stub

    }

    public void b() {
    }
}

 

public class Interface {
    public static void main(String[] args) {
        // A a1 = new C();
       
    }
}
