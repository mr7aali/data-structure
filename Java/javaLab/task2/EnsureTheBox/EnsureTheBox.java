package Java.javaLab.task2.EnsureTheBox;

class Box {
    int length; // max 10
    int width; // max 12
    int height; // max 8

    Box() {
        length = 0;
        width = 0;
        height = 0;
    }

    Box(int length, int width, int height) {
        this.height = height;
        this.length = length;
        this.width = width;
    }

    void ensureTheBox() {
        if (length != 10 || width != 12 || height != 8) {
            int tem;
            if (length > 10) {
                tem = this.length - 10;
                System.out.println("You need to decrement the length by " + tem + " units");
            } else {
                tem = 10 - this.length;
                System.out.println("You need to increase the length by " + tem + " units");
            }
            if (width > 10) {
                tem = this.width - 12;
                System.out.println("You need to decrement the width by " + tem + " units");
            } else {
                tem = 12 - this.width;
                System.out.println("You need to increase the width by " + tem + " units");
            }
            if (height > 10) {
                tem = this.height - 8;
                System.out.println("You need to decrement the height by " + tem + " units");
            } else {
                tem = 8 - this.height;
                System.out.println("You need to increase the height by " + tem + " units");
            }

        } else {
            System.out.println("Box are perfect size! No need to change...");
        }
    }

}

public class EnsureTheBox {
    public static void main(String[] args) {
        Box b1 = new Box(12, 15, 36);
        b1.ensureTheBox();
    }
}
