package Java.OPP_Intro;

import java.util.Arrays;

/**
 * Student
 */
public class Student {
    int rno;
    String name;
    float marks;

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
                "Hello! My name is" + this.name + ", my Roll number is " + this.rno + "and a I get " + this.marks);
    }
}

class Main {
    public static void main(String[] args) {
        Student[] students = new Student[5];
        Student Fardin = new Student(28, "ali", 80.5f);
        Fardin.changeName("Ali");
        Fardin.greeting();
        Fardin.getStudentInfo();
    }
}
