package Java.labTask.BinarySearch;

import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {
        int[] numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int numbersLength = numbers.length;
        System.out.print("Search for : ");
        Scanner userInput = new Scanner(System.in);
        int key = userInput.nextInt();
        int left = 0, right = numbersLength-1;
        boolean found = false;
        while (left <= right) {

            int mid = (left+right)/2;
            if(numbers[mid]==key){
                System.out.println("Found "+ numbers[mid] + " at index "+ mid);
                found = true;
                break;
            }
            else if(numbers[mid] < key ){
          
            left =  mid+1;
            }
            else{
                right = mid;
            }
        }

        if(!found){
            System.out.println("Not found !");
        }
       
    }
}
