package com.itheima.abstractDemo1;

public abstract class A {
    private String name;
    private int age;

    public abstract void show1();
    public void show2(){
        System.out.println("抽象类中的普通方法");
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
}
