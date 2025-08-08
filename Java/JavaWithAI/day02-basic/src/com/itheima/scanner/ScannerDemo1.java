package com.itheima.scanner;

import java.util.Scanner;

public class ScannerDemo1 {
    public static void main(String[] args) {
        // 调用方法
        getInfo();
    }

    // 定义一个方法， 让用户输入年龄和身高，并输出
    public static void getInfo() {
        // 2. 创建对象
        Scanner sc = new Scanner(System.in);
        // 3. 提示用户输入
        System.out.println("请输入年龄：");
        // 4. 接收用户输入的年龄
        // nextInt()：接收一个整数
        int age = sc.nextInt();
        System.out.println("请输入身高：");
        // 5. 接收用户输入的身高
        // nextDouble()：接收一个浮点数
        double height = sc.nextDouble();

        System.out.println("年龄：" + age);
        System.out.println("身高：" + height);
    }
}
