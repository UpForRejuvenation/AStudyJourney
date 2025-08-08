package com.itheima.PackDemo;

public class Student {
    private String name;
    private int age;
    private int score;

    public void setName(String name) {
        this.name = name;
    }
    public void getName() {
        System.out.println(name);
    }

    public void setAge(int age) {
        this.age = age;
    }
    public void getAge() {
        System.out.println(age);
    }

    public void setScore(int score) {
        this.score = score;
    }
    public void getScore() {
        System.out.println(score);
    }
}
