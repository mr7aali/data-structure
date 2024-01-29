package Java.javaLab.task2.addTowTime;

class Time {
    int h, m, s;

    Time() {

    }

    Time(int h, int m, int s) {
        this.h = h;
        this.m = m;
        this.s = s;

    }

    Time add_time(Time obj) {

        int hours = h + obj.h;
        int mins = m + obj.m;
        int sec = s + obj.s;

        int convertInSeconds = (hours * 3600) + (mins * 60) + sec;

        sec = convertInSeconds % 60;
        mins = (convertInSeconds / 60) % 60;
        hours = convertInSeconds / 3600;

        return new Time(hours, mins, sec);
    }

    void View() {
        System.out.println("hours:" + h);
        System.out.println("minutes:" + m);
        System.out.println("seconds:" + s);

    }

}

public class addTowTime {
    public static void main(String[] agrs) {
        Time t1 = new Time(2, 55, 40);
        Time t2 = new Time(5, 20, 30);

        Time result = t2.add_time(t1);
        result.View();

    }
}
