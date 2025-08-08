package com.itheima.method;

public class MethodDemo2 {
    public static void main(String[] args) {
        // 调用定义的几个重载方法
        print("hello");
        print(100);
        print(3.14);
        print('a');
    }

    // 定义几个方法，体现java的函数重载
    public static void print(String str) {
        System.out.println(str);
    }

    public static void print(int n) {
        System.out.println(n);
    }

    public static void print(double d) {
        System.out.println(d);
    }

    public static void print(char c) {
        System.out.println(c);
    }
}
