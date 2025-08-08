package com.itheima.override;

public class Cat extends Animal{
    @Override
    public void sleep(){
        System.out.println("小猫在睡觉");
    }

//    private void eat(){
//        System.out.println("小猫在吃鱼");
//    }

    public static void main(String[] args) {
        Cat c=new Cat();
        c.sleep();
//        c.eat();
    }
}
