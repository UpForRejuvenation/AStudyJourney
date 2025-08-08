package com.itheima.singleInstance;

public class Main {
    public static void main(String[] args) {
        A a1=A.getInstance();
        A a2=A.getInstance();
        System.out.println("A:"+(a1==a2));
        System.out.println("========================");
        B b1=B.getInstance();
        B b2=B.getInstance();
        System.out.println("B:" + (b1==b2));
    }
}
