package com.itheima.extendsDemo;

public class Teacher extends Person{
    private String skill;

    public Teacher(){}

    public Teacher(String name,String sex,String skill){
        super(name,sex);
        this.skill=skill;
    }
    public String getSkill() {
        return skill;
    }
    public void setSkill(String skill) {
        this.skill = skill;
    }
}
