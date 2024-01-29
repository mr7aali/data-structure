package Java.javaLab.task2.Drive49;

public class Drive49 {

    int Total_capacity = 10;
    int used_portion = 0;
    int free_portion = 10;

    Drive49() {
        System.out.println(Total_capacity);
    }

    void uploadFile(int fileSize) {
        if (fileSize <= free_portion) {
            used_portion += fileSize;
            free_portion -= fileSize;
            System.out.println("File uploaded successfully. Used Space: " + used_portion + "GB, Free Space: "
                    + free_portion + "GB");
        } else {
            System.out.println("Not enough free.");
        }
    }

    void upgradePlan(int additionalCapacity) {
        Total_capacity += additionalCapacity;
        free_portion += additionalCapacity;
        System.out.println("Plan upgraded successfully. Total Capacity: " + Total_capacity + "GB, Free Space: "
                + free_portion + "GB");
    }

    public void viewStatus() {
        System.out.println("Storage Status - Total Capacity: " + Total_capacity + "GB, Used Space: " + used_portion
                + "GB, Free Space: " + free_portion + "GB");
    }

    public static void main(String[] args) {
        Drive49 d1 = new Drive49();

        d1.viewStatus();
        d1.uploadFile(10);
        d1.viewStatus();

        
    }
}
