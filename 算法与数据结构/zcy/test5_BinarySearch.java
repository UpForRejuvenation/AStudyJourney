import java.util.Arrays;
import java.util.Scanner;

public class test5_BinarySearch {
    public static void main(String[] args) {
        int n =100;
        int N=1000;

        Func func = new Func();
        int[] arr = func.RandomArr(n, N);
        
        Scanner sc = new Scanner(System.in);
        System.out.print("输入要查找的数:");
        int num = sc.nextInt();

        // func.Show(arr);
        Arrays.sort(arr);
        // func.Show(arr);
        func.Show(arr);
        int ans = BS(arr,num);
        if(ans == -1){
            System.out.println("数组中不含该数");
        } else {
            System.out.println("num在数组的"+(ans+1)+"位置");
        }
        
    }

    public static int BS(int[] arr,int num){
        if(arr==null){
            return -1;
        }

        int l=0;
        int r=arr.length-1;
        while(l<=r){
            int m=(l+r)/2;
            if(arr[m]==num){
                return m;
            } else if(arr[m]>num){
                r=m-1;
            } else {
                l=m+1;
            }
        }
        return -1;
    }
}
