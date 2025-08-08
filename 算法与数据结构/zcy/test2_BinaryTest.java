import java.util.Scanner;

/*
 * 这是一个测试输出某数二进制表示的代码
 */
public class test2_BinaryTest{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("input number:");
        int n = sc.nextInt();

        for(int i = 31; i >= 0;i--){
            System.out.print((n & (1<<i)) == 0 ? "0":"1");
        }
    }
}