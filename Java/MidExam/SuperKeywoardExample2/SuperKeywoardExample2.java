package Java.MidExam.SuperKeywoardExample2;

class University {
    String location, numStu;

    University() {
    }

    University(String location, String numStu) {
        this.location = location;
        this.numStu = numStu;
    }
    University(int location, int  numStu,int sd) {
        // this.location = location;
        // this.numStu = numStu;
    }

    void display() {
    }
}

class DeptCSE extends University {
    String dept;

    void display() {
        System.out.println(this.location);
        System.out.println(this.numStu);
        System.out.println(this.dept);
    }
}

class DeptEEE extends University {
    String dept;

    DeptEEE() {
    }
    DeptEEE(String location, String numStu, String dept) {
        // super(location, numStu);
        
        this.dept = dept;
    }

    void display() {
        System.out.println(this.location);
        System.out.println(this.numStu);
        System.out.println(this.dept);
    }
}

public class SuperKeywoardExample2 {
    public static void main(String[] args) {
        DeptEEE obj = new DeptEEE("EEE", "100", "Mirpur");

    }
}

// Write a Java program with three classes named University, DeptCSE, and
// DeptEEE. The parent class, University, holds common attributes like dept,
// numStu, and location, along with a method to display details. Two child
// classes, DeptCSE, and DeptEEE, extend University and override the display
// method to include specific information for each type of department. Use
// 'this' and 'super' keywords to access the display method.