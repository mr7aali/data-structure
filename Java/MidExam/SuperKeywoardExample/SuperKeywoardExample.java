package Java.MidExam.SuperKeywoardExample;

class SuperClass {
    int num = 10;
    void DisplayFromSuperClass() {
        System.out.println("Method are called from super class");
    }
}

class SubClass extends SuperClass {
    int num2 = super.num;

    void DisplayFromSubClass() {
        System.out.println(super.num);
        super.DisplayFromSuperClass();
    }
}

public class SuperKeywoardExample {
    public static void main(String[] args) {
        SubClass obj = new SubClass();
        obj.DisplayFromSubClass();

        System.out.println(obj);
    }
}
