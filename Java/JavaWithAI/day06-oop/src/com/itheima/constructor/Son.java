package com.itheima.constructor;

public class Son extends Father{

    public Son(){
        System.out.println("子类无参构造器");
    }

    public Son(String name){
        super("father");
        this.name=name;
        System.out.println("子类有参构造");
    }



}
