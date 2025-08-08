package com.itheima.polymorphism;

public class Wolf extends Animal{
    @Override
    public void run() {
        System.out.println("狼跑的快");
    }

    public void eatSheep(){
        System.out.println("狼吃羊");
    }
}
