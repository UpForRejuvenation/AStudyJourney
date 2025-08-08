package com.itheima.StringDemo;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
//        char[] chars={'a','b','c'};
//        String s=new String(chars);
//        System.out.println(s);
//
//        byte[] bytes={65,66,67};
//        String s1=new String(bytes);
//        System.out.println(s1);


        String phoneNum=new String();
        Scanner sc=new Scanner(System.in);
        System.out.println("请输入手机号");
        phoneNum=sc.next();

        System.out.println("隐私处理后的手机号是："+phoneNum.substring(0,3)+"****"+phoneNum.substring(7));
    }
}
