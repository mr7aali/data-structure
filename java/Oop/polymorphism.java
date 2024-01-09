
class Student {
    String name;
    int age;

    public void printInfo(String name) {
        System.out.println(this.name);
    }

    public void printInfo(int age) {
        this.age = age;
        System.out.println(this.age);
    }

    public void printInfo(String name, int age) {
        System.out.println(this.name);
        System.out.println(this.age);
    }

}

public class polymorphism {
    public static void main(String args[]) {

        Student s1 = new Student();
        s1.name = "Ali";
        s1.age = 21;


        s1.printInfo(205);
    }
}