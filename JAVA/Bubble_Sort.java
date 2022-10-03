import java.util.Scanner;

public class Bubble_Sort {
    void bubbleSort(int[] arr){
        for (int i = 0; i < arr.length-1; i++) {
            for (int j = 0; j < arr.length-i-1; j++) {
                if (arr[j]>arr[j+1]){
                    // ---------- usual process----------
                    // int temp = arr[j+1];
                    // arr[j+1] = arr[j];
                    // arr[j] = temp;
                    
                    //---------- new process--------
                    int sum = arr[j]+arr[j+1];
                    arr[j] = arr[j+1];
                    arr[j+1] = sum - arr[j];
                }
            }
        }
    }

    void printArray(int[] arr){
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]+" ");
        }
    }


    public static void main(String[] args) {
        Bubble_Sort ob = new Bubble_Sort();
        System.out.println("Enter the no of elements of the array : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.println("Enter the elements of the array one by one : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Before sorting the array is : ");
        ob.printArray(arr);

        System.out.println("After sorting the array is : ");
        ob.bubbleSort(arr);
        ob.printArray(arr);

    }

}
