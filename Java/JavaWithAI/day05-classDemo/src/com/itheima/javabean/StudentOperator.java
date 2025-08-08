package com.itheima.javabean;

public class StudentOperator {
    Student stu=new Student();
    public StudentOperator(Student stu){
        this.stu=stu;
    }

    public void setName(String name){
        stu.setName(name);
    }
    public String getName(){
        return stu.getName();
    }

    public void setAge(int age){
        stu.setAge(age);
    }
    public int getAge(){
        return stu.getAge();
    }

}
