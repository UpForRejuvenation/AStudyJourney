package com.itheima.method;

public class MethodDemo1 {
    public static void main(String[] args) {
        // 调用方法，获取验证码
        String code = getCode(4);
        System.out.println(code);
    }


    // 定义一个方法，返回一个数字验证码，有输入几位
    // Math.random() * 10则是0-9之间的随机数，包含0，不包含10
    public static String getCode(int n) {
        StringBuilder code = new StringBuilder();
        for (int i = 0; i < n; i++) {
            // 每次生成一个0-9之间的随机数，并拼接到code后面
            code.append((int)(Math.random() * 10));
        }
        return code.toString();
    }

}
