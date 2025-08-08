package com.itheima.demo1;

import java.util.HashSet;
import java.util.Set;

public class SetDemo1 {
    public static void main(String[] args) {
        Student s1 = new Student("张三", 18, "北京", 111);
        Student s2 = new Student("张三", 18, "北京", 111);
        Student s3 = new Student("李四", 18, "上海", 222);
        Student s4 = new Student("李四", 18, "上海", 222);

        Set<Student> set = new HashSet<>();
        set.add(s1);
        set.add(s2);
        set.add(s3);
        set.add(s4);

        System.out.println(set);
    }
}
