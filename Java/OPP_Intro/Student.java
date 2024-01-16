package Java.OPP_Intro;

/**
 * Student
 */
public class Student {
    int rno;
    String name;
    float marks;

    Student() {
        this.rno = 0;
        this.name = "Defult Name";
        this.marks = 0;
    }

    Student(int rno, String name, float marks) {
        this.rno = rno;
        this.name = name;
        this.marks = marks;
    }

    Student(Student other) {
        this.name = other.name;
        this.rno = other.rno;
        this.marks = other.marks;
    }

    void greeting() {
        System.out.println("Hello! My name is " + this.name);
    }

    void changeName(String name) {
        this.name = name;
    }

    void getStudentInfo() {
        System.out.println(
                "Hello! My name is <" + this.name + ">, my Roll number is <" + this.rno + "> and a I get <" + this.marks
                        + ">");
    }
}

class Main {
    public static void main(String[] args) {
        Student[] students = new Student[5];

        Student Fardin = new Student(28, "Fardin Khan", 80.5f);
       

        Student Ali = new Student();
        Student other = new Student(Fardin);
        Ali.getStudentInfo();
        other.getStudentInfo();
        Fardin.getStudentInfo();
    }
}
