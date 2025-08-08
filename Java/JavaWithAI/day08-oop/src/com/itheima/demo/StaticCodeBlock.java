package com.itheima.demo;

public class StaticCodeBlock {
    static{
        System.out.println("静态代码块被执行");
    }

    {
        System.out.println("实例代码块被执行");
    }

    public static void main(String[] args) {
        System.out.println("main方法被执行");
        new StaticCodeBlock();
        new StaticCodeBlock();
    }
}
