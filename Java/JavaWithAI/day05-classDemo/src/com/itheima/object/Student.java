package com.itheima.object;

public class Student {
    String name;

    double chinese;
    double math;
    double english;

    public void printSum(){
        System.out.println("总成绩是：" + (chinese + math + english));
    }

    public void printAvg(){
        System.out.println("平均成绩是：" + (chinese + math + english) / 3);
    }
}
