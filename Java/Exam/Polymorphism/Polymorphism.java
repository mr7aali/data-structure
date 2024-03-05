package Java.Exam.Polymorphism;

class SuperClass {
    int num = 10;

    void DisplayFromSuperClass() {
        System.out.println("Method are called from super class");
    }
}

class SubClass extends SuperClass {
    int num2 = super.num;

    // void DisplayFromSubClass() {
    // System.out.println(super.num);
    // super.DisplayFromSuperClass();
    // }

    void DisplayFromSuperClass() {
        System.out.println("Method are called from sub class");
    }
}

public class Polymorphism {
    public static void main(String[] args) {
        SuperClass obj = new SubClass();
        obj.DisplayFromSuperClass();
    }
}
