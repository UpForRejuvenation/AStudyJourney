package com.itheima.javabean;

public class Demo {
    public static void main(String[] args) {
        Student stu1=new Student();
        StudentOperator Stu1Oper=new StudentOperator(stu1);

        Stu1Oper.setName("java");
        Stu1Oper.setAge(18);

        System.out.println("name:"+ Stu1Oper.getName());
        System.out.println("age:"+Stu1Oper.getAge());

    }
}
