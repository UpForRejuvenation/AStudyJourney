import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Q13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String roma=sc.next();
        int out=romanToInt_ans(roma);
        System.out.println(out);
    }

    // 初始思路，狠狠if
    public static int romanToInt_init(String s) {

        int ret=0;
        int len=s.length();
        for(int i=0;i<len;i++){

            if(s.charAt(i)=='I'){
                if( i+1<len && s.charAt(i+1)=='V'){
                    ret+=4;
                    i++;
                }
                else if(i+1<len && s.charAt(i+1) == 'X'){
                    ret+=9;
                    i++;
                }
                else{
                    ret++;
                }
            }
            else if(s.charAt(i)=='V'){
                ret+=5;
            }
            else if(s.charAt(i)=='X'){
                if (i + 1 < len && s.charAt(i + 1) == 'L') {
                    ret += 40;
                    i++;
                } 
                else if(i + 1 < len && s.charAt(i + 1) == 'C'){
                    ret+=90;
                    i++;
                }
                else{
                    ret+=10;
                }
            }
            else if(s.charAt(i)=='L'){
                ret+=50;
            }
            else if(s.charAt(i)=='C'){
                if (i + 1 < len && s.charAt(i + 1) == 'D') {
                    ret += 400;
                    i++;
                } else if (i + 1 < len && s.charAt(i + 1) == 'M') {
                    ret += 900;
                    i++;
                } else {
                    ret += 100;
                }              
            }
            else if(s.charAt(i)=='D'){
                ret+=500;
            }
            else{
                ret+=1000;
            }
            
        }
        return ret;
    }

    // 评论区思路，在特定字符左边就-
    public static int romanToInt_update(String s) {

        int ret = 0;
        int len = s.length();
        for (int i = 0; i < len; i++) {
            if (s.charAt(i) == 'I') {
                if(i+1<len && (s.charAt(i+1)=='V' || s.charAt(i+1)=='X')){
                    ret--;
                } else {
                    ret++;
                }
            } else if (s.charAt(i) == 'V') {
                ret += 5;
            } else if (s.charAt(i) == 'X') {
                if (i + 1 < len && (s.charAt(i+1) == 'L' || s.charAt(i+1) == 'C')) {
                    ret -= 10;
                } else {
                    ret += 10;
                }
            } else if (s.charAt(i) == 'L') {
                ret += 50;
            } else if (s.charAt(i) == 'C') {
                if (i + 1 < len && (s.charAt(i+1) == 'D' || s.charAt(i+1) == 'M')) {
                    ret -= 100;
                } else {
                    ret += 100;
                }
            } else if (s.charAt(i) == 'D') {
                ret += 500;
            } else {
                ret += 1000;
            }

        }
        return ret;
    }

    /*
     * 答案
     * 用HashMap存储
     * 左边的比右边小就减
     */
    public static int romanToInt_ans(String s){
        Map<Character, Integer> synbolValues = new HashMap<Character, Integer>(){{
            put('I',1);
            put('V', 5);
            put('X', 10);
            put('L', 50);
            put('C', 100);
            put('D', 500);
            put('M', 1000);
        }};

        int ans=0;
        int len=s.length();

        for(int i=0;i<len;i++){
            int value=synbolValues.get(s.charAt(i));
            if(i+1<len && value<synbolValues.get(s.charAt(i+1))){
                ans-=value;
            }
            else{
                ans+=value;
            }
        }

        return ans;
    }
}
