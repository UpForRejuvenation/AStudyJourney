package com.itheima.Demo4genericity;

import com.itheima.Demo3genericity.Student;

public class GenericDemo1 {
    public static void main(String[] args) {
        String[] names={"张三","李四","王五"};
        printArray(names);

        Student[] stus=new Student[3];
        printArray(stus);
    }

    private static <T> void printArray(T[] names) {
        for (int i = 0; i < names.length; i++) {
            System.out.println(names[i]);
        }
    }
}
