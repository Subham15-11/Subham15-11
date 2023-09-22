import java.util.*;
import java.util.Arrays;

public class sorting {

    // SELECTION SORT
    public static void selection(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[i]) {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }

    // BUBBLE SORT
    public static void bubble(int arr[], int n) {
        int count = 1;
        while (count < n) {
            for (int i = 0; i < n - count; i++) {
                if (arr[i] > arr[i + 1]) {
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
            count++;
        }
    }

    // INSERTION SORT
    public static void insertion(int arr[], int n) {
        for (int i = 1; i < n; i++) {
            int current = arr[i];
            int j = i - 1;
            while (arr[j] > current && j >= 0) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = current;
        }
    }

    // PREDEFIND FUNCTION
    public static void predefined(int arr[]) {
        Arrays.sort(arr);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter size");
        int n = sc.nextInt();
        System.out.println("enter unsorted elements");
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("after sorted the elements are :");
        // selection(arr,n);
        // bubble(arr,n);
        insertion(arr, n);
        // predefined(arr);
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + "\t");
        }
    }

}
