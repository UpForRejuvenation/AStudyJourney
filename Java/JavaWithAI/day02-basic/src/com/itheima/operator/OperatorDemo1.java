package com.itheima.operator;

public class OperatorDemo1 {
    public static void main(String[] args) {
        print();
    }

    public static void print() {
        // 定义变量a=5,输出验证a+'a'和a+"a"的区别
        int a = 5;
        System.out.println(a + 'a');
        System.out.println(a + "a");

    }
}
