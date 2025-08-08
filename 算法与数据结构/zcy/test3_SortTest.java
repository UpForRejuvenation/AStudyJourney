import java.util.Scanner;

/*
 * 这是一个测试三种傻瓜排序的代码
 * 选择排序，冒泡排序，插入排序
 * 其中插入排序需要好好学习，基本思想是从第二个元素开始，将内层循环变量j设为外层循环遍历i的i-1，
 * 内层循环条件设为 j>=0 && arr[j]>arr[j+1]
 */
public class test3_SortTest{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("input length：");
        int n = sc.nextInt();

        System.out.print("input value：");
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        System.out.print("before sort：");
        Show(arr);
        BubbleSort(arr);
        System.out.print("after sort：");
        Show(arr);
    }

    public static void Swap(int[] arr,int i, int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    public static void Show(int[] arr){
        for(int i=0;i<arr.length;i++){
            System.err.print(arr[i]+" ");
        }
        System.out.println();
    }
    // select sort
    public static void SelectSort(int[] arr){
        for(int i = 0; i<arr.length;i++){
            int min_i = i;
            for(int j = i+1; j<arr.length;j++){
                if(arr[j]<arr[min_i]){
                    min_i=j;
                }
            }
            Swap(arr,i,min_i);
        }
    }

    // bubble sort
    public static void BubbleSort(int[] arr){
        for(int i=0;i<arr.length;i++){
            for(int j=1;j<arr.length-i;j++){
                if(arr[j]<arr[j-1]){
                    Swap(arr,j,j-1);
                }
            }
        }
    }

    // insert sort
    public static void InsertSort(int[] arr){
        for(int i=1;i<arr.length;i++){
            for(int j=0;j<i;j++){
                if(arr[j]>arr[i]){
                    int num=arr[i];
                    for(int k=i;k>j;k--){
                        arr[k]=arr[k-1];
                    }
                    arr[j]=num;
                }
            }
        }
    }

    // 左程云插入排序
    public static void insertionSort(int[] arr) {
        if (arr == null || arr.length < 2) {
            return;
        }
        for (int i = 1; i < arr.length; i++) {
            for (int j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--) {
                Swap(arr, j, j + 1);
            }
        }
    }
}