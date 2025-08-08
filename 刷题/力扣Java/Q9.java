import java.util.Scanner;

public class Q9 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x=sc.nextInt();
        if(isPalindrome_int(x)){
            System.out.println("回文数");
        }
        else{
            System.out.println("非回文数");
        }
    }
    // 转字符串做法
    public static boolean isPalindrome(int x) {
        String s_x = String.valueOf(x);
        int len = s_x.length();
        for (int i = 0; i < len / 2; i++) {
            if (s_x.charAt(i) != s_x.charAt(len - i - 1)) {
                return false;
            }
        }
        return true;
    }
    
    public static boolean isPalindrome_int(int x){
        if(x<0){
            return false;
        }

        int num=0;
        int temp=x;
        while(temp>0){
            num=num*10+temp%10;
            temp/=10;
        }

        return num==x;
    }
}
