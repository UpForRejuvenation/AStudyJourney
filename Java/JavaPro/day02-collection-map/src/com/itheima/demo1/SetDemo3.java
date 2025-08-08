package com.itheima.demo1;

import java.util.Comparator;
import java.util.Set;
import java.util.TreeSet;

public class SetDemo3 {
    public static void main(String[] args) {
        /*
        TreeMap有序，不重复无索引。
        存储元素必须实现比较，有两种方式
        1.在Teacher类中implements Comparable<Teacher>，并重写compareTo方法
        2.创建TreeSet集合对象时，传入Comparator接口的实现类对象
        当两种方法都存在的时候，优先使用第二种方法
         */
        Set<Teacher> teachers = new TreeSet<>(new Comparator<Teacher>() {
            @Override
            public int compare(Teacher o1, Teacher o2) {
                return o2.getAge()-o1.getAge();
                // return Double.compare(o1.getSalary(),o2.getSalary());
            }
        });

        teachers.add(new Teacher("小王", 18, 5000.12));

        teachers.add(new Teacher("小耿", 17, 1000.92));
        teachers.add(new Teacher("小高", 21, 399.15));
        teachers.add(new Teacher("小李", 20, 899.67));
        System.out.println( teachers);
    }
}
