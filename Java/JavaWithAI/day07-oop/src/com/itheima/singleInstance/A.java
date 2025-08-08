package com.itheima.singleInstance;

// 饿汉式单例，先创建对象，然后再获取对象
public class A {
    private static A a = new A();

    private A(){}

    public static A getInstance(){
        return a;
    }
}
