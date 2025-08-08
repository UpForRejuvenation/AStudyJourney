package com.itheima.singleInstance;

// 懒汉模式，先不创建对象，当调用getInstance()方法时才创建对象
public class B {
    private static B b;
    private B(){}

    public static B getInstance(){
        if(b == null){
            b = new B();
        }
        return b;
    }
}
