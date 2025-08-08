package com.itheima.StringDemo;

import java.util.Scanner;

public class VerifyCodeDemo {
    public static void main(String[] args) {

        String code=getVerifyCode(4);
        System.out.println(code);
        System.out.println("请输入验证码:");
        Scanner sc=new Scanner(System.in);
        String input=sc.next();

        if(input.equalsIgnoreCase(code)) {
            System.out.println("验证码输入正确");
        }else {
            System.out.println("验证码输入错误");
        }
    }

    public static String getVerifyCode(int n) {
        String verifyCode = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
        String code="";
        for (int i = 0; i < n; i++) {
            int index = (int)(Math.random()*verifyCode.length());
            code+=verifyCode.charAt(index);
        }
        return code;
    }
}
