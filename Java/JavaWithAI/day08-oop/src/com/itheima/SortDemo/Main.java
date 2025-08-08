package com.itheima.SortDemo;

import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Student[] students=new Student[4];
        students[0]=new Student("张三",17);
        students[1]=new Student("李四",21);
        students[2]=new Student("王五",19);
        students[3]=new Student("赵六",18);

        // 方法一：匿名内部类
//        Arrays.sort(students, new Comparator<Student>() {
//            @Override
//            public int compare(Student o1, Student o2) {
//                return o1.getAge()-o2.getAge();
//            }
//        });

        // 方法二：lambda表达式
//        Arrays.sort(students,(Student o1, Student o2)->{
//            return o1.getAge()-o2.getAge();
//        });

        // 方法三：方法引用
//        Arrays.sort(students,(o1,o2)-> o1.getAge()-o2.getAge());

        // 方法四：静态方法引用
//        Arrays.sort(students,(o1,o2)-> Student.compareAge(o1,o2));

        // 方法五：对象方法引用
        // 需要是非静态方法
//        Student s=new Student();
//        Arrays.sort(students,s::compareAge);

        // 方法六：实例方法引用
        Arrays.sort(students,Student::compareAge);
        for (int i = 0; i < students.length; i++) {
            System.out.println(students[i]);
        }
    }
}
