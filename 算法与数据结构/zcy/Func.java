public class Func implements Function{
    @Override
    public int[] RandomArr(int n, int N){
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = (int) (Math.random() * N + 1);
        }
        return arr;
    }

    @Override
    public void Swap(int[] arr, int i, int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    @Override
    public void Show(int[] arr){
        System.out.println("数组：");
        for (int i = 0; i < arr.length; i++) {
            System.err.print(arr[i] + " ");
        }
        System.out.println();
    }
    
    @Override
    public boolean SameArr(int[] arr1, int[] arr2){
        for (int i = 0; i < arr1.length; i++) {
            if (arr1[i] != arr2[i]) {
                return false;
            }
        }
        return true;
    }
}