// import java.util.Random;

/*
 * 这是一个用于学习对数器的代码示例。
 * 即用随机数产生算法需要验证的数据结构类型，通过比较检查错误
 */
public class test4_Validater {
    public static void main(String[] args) {
        // 测试数组的长度
        int N=100;
        // 测试数据的范围，经过随机数生成1-V
        int V=1000;
        // 生成测试数组
        int[] arr=RandomArr(N,V);
        // 复制数组给三个新数组用于三种排序测试
        int[] arr1=CopyArr(arr);
        int[] arr2=CopyArr(arr);
        int[] arr3=CopyArr(arr);
        // 测试三种排序
        SelectSort(arr1);
        BubbleSort(arr2);
        InsertSort(arr3);

        if(!SameArr(arr1, arr2)||!SameArr(arr1, arr3)){
            System.err.println("出错了");
        }
        System.out.println("测试结束");
        System.out.println("原数组：");
        Show(arr);
        System.out.println("选择排序：");
        Show(arr1);
        System.out.println("冒泡排序：");
        Show(arr2);
        System.out.println("插入排序：");
        Show(arr3);
    }

    public static int[] RandomArr(int n,int v){
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=(int)(Math.random()*v+1);
        }
        return arr;
    }

    public static int[] CopyArr(int[] arr1){
        int[] arr2=new int[arr1.length];
        for(int i=0;i<arr1.length;i++){
            arr2[i]=arr1[i];
        }
        return arr2;
    }

    public static boolean SameArr(int[] arr1,int[] arr2){
        for(int i=0;i<arr1.length;i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
        return true;
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
