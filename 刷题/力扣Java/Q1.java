import java.util.Scanner;
import java.util.*;

public class Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine(); // 读取整行输入，如 "[3,3] 6"
        String[] parts = input.split(" "); // 分割为数组部分和目标值部分
        
        // 解析数组部分
        String arrayPart = parts[0].replaceAll("[\\[\\]]", ""); // 去除方括号
        String[] numsStr = arrayPart.split(",");
        int[] nums = new int[numsStr.length]; // 正确初始化数组
        for (int i = 0; i < numsStr.length; i++) {
            nums[i] = Integer.parseInt(numsStr[i]);
        }
        
        int target = Integer.parseInt(parts[1]); // 解析目标值
        Solution solution = new Q1().new Solution(); // 创建Solution实例
        int[] result = solution.twoSum(nums, target); // 调用方法
        System.out.println("[" + result[0] + "," + result[1] + "]"); // 输出结果
    }

    class Solution {
        public int[] twoSum(int[] nums, int target) {
            Map<Integer, Integer> hashtable = new HashMap<Integer, Integer>();
            for (int i = 0; i < nums.length; ++i) {
                if (hashtable.containsKey(target - nums[i])) {
                    return new int[]{hashtable.get(target - nums[i]), i};
                }

                hashtable.put(nums[i], i); // 逐步填充表
            }
            return new int[0];
        }
    }
}