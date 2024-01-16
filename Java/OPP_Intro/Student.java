package Java.OPP_Intro;



/**
 * Student
 */
public class Student {
    int rno;
    String name;
    float marks;

    Student() {
        this.rno = 1;
        this.name = "Mr Ali";
        this.marks = 80.5f;
    }

    Student(int rno, String name, float marks) {
        this.rno = rno;
        this.name = name;
        this.marks = marks;
    }

    void greeting() {
        System.out.println("Hello! My name is " + this.name);
    }

    void changeName(String name) {
        this.name = name;
    }

    void getStudentInfo() {
        System.out.println(
                "Hello! My name is <" + this.name + ">, my Roll number is <" + this.rno + "> and a I get <" + this.marks +">");
    }
}

class Main {
    public static void main(String[] args) {
        Student[] students = new Student[5];

        Student Fardin = new Student(28, "ali", 80.5f);
        Fardin.changeName("Fardin Khan");
        Fardin.greeting();
        Fardin.getStudentInfo();

        Student Ali = new Student();
        
        Ali.getStudentInfo();
    }
}
