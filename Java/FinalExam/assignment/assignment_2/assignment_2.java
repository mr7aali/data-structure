package Java.FinalExam.assignment.assignment_2;

class Bicycle {
    double frameSize;
    int nGears;
    int currentGear;

    // Bicycle(){}
    Bicycle(double frameSize, int nGears) {
        this.frameSize = frameSize;
        this.nGears = nGears;
    }
}

class CargoBicycle extends Bicycle {
    double maxLoad;
    double currentLoad;

    CargoBicycle(double frameSize, int nGears, double maxLoad) {
        super(frameSize, nGears);
        this.maxLoad = maxLoad;
    }
}

interface Electrified {
    int getChargeCapacity();

    double getCurrentCharge();

    void setCurrentCharge(double charge);

}

class ElectricBicycle extends Bicycle implements Electrified {
    int batteryCapacity;
    double currentCharge;

    ElectricBicycle(double frameSize, int nGears, int batteryCapacity) {
        super(frameSize, nGears);
        this.batteryCapacity = batteryCapacity;
    }

    public int getChargeCapacity() {
        return batteryCapacity;
    }

    public double getCurrentCharge() {
        return currentCharge;
    }

    public void setCurrentCharge(double charge) {
        currentCharge = charge;
    }
}

class ElectricCargoBicycle extends CargoBicycle implements Electrified {
    int batteryCapacity;
    double currentCharge;

    ElectricCargoBicycle(double frameSize, int nGears, double maxLoad, int batteryCapacity) {
        super(frameSize, nGears, maxLoad);
        this.batteryCapacity = batteryCapacity;
    }

    public int getChargeCapacity() {
        return batteryCapacity;
    }

    public double getCurrentCharge() {
        return currentCharge;
    }

    public void setCurrentCharge(double charge) {
        currentCharge = charge;
    }
}

public class assignment_2 {
    public static void main(String[] args) {
        ElectricCargoBicycle Cargo = new ElectricCargoBicycle(26, 6, 90, 900);

    }
}
