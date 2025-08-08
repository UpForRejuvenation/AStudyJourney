public class Q14{
    /*
     * 没写出来，下面是根据题解思路写出来的答案
     */
    public String longestCommonPrefix(String[] strs) {
        if(strs.length==0 || strs==null){
            return "";
        }

        String now = strs[0];
        int len = strs.length;
        for(int i=1;i<strs.length;i++){
            now = longestString(now,strs[i]);
            if(now.length()==0){
                break;
            }
        }

        return now;
    }

    public String longestString(String str1, String str2){
        int index=0;
        int min_len=Math.min(str1.length(),str2.length());
        for (int i = 0; i < min_len; i++) {
            if(str1.charAt(i)==str2.charAt(i)){
                index++;
            } else {
                break;
            }
        }

        // index是结束索引，不包括该索引字符
        return str1.substring(0, index);
    }
    
    /*
     * 下面是一个比较少的答案思路，
     * 两个思路一样，只是下面这一个没有新声明方法
     */

    public String longesPreString(String[] strs){
        if(strs.length==0){
            return "";
        }

        String pre = strs[0];
        for(int i=1;i<strs.length;i++){
            int j=0;
            for(;j<pre.length()&&j<strs[i].length();j++){
                if(pre.charAt(j)!=strs[i].charAt(j)){
                    break;
                }
            }
            pre = pre.substring(0, j);
        }

        return pre;
    }
}