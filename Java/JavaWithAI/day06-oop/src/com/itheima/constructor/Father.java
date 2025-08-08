package com.itheima.constructor;

public class Father {
    public String name;

    public Father(){
        System.out.println("父类无参构造");
    }

    public Father(String name){
        this.name=name;
        System.out.println("父类有参构造");
    }
}
