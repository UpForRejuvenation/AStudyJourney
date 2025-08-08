package com.itheima.polymorphism;

public class Sheep extends Animal{
    @Override
    public void run(){
        System.out.println("羊跑的慢");
    }

    public void eatWeed(){
        System.out.println("羊吃草");
    }
}
