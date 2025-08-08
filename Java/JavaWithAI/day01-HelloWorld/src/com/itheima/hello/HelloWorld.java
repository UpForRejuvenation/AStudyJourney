package com.itheima.hello;

public class HelloWorld {

    public static void main(String[] args) {
//        printHelloWorld();
//        System.out.println("---------------");
//        System.out.println(sum(1, 2));
        printChar();
    }

    //打印三行Hello World
    public static void printHelloWorld() {
        System.out.println("Hello World1!");
        System.out.println("Hello World2!");
        System.out.println("Hello World3!");
    }

    //定义一个方法返回两数之和
    public static int sum(int a, int b) {
        return a + b;
    }

    //测试字符打印
    public static void printChar() {
        char a='a';
        System.out.println(a);
        System.out.println((char)(a+1));
    }
}
