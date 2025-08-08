package com.itheima.NewInClass;

public class Main {
    public static void main(String[] args) {
        Swim s1=new Swim() {
            @Override
            public void swim() {
                System.out.println("s1 swim");
            }
        };
        s1.swim();

        (new Swim(){
            @Override
            public void swim() {
                System.out.println("s2 swim");
            }
        }).swim();

    }
}
