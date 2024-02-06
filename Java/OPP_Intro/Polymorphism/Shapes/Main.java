package Java.OPP_Intro.Polymorphism.Shapes;

public class Main {
    public static void main(String[] args) {
        Shapes s = new Shapes();
        Circle c = new Circle();
        Squre sq = new Squre();

        s.area();
        c.area();
        sq.area();
    }
}
