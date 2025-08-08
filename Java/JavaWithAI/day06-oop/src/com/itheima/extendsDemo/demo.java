package com.itheima.extendsDemo;

public class demo {
    public static void main(String[] args) {
        Teacher t=new Teacher();
        t.setName("sun");
        t.setSex("男");
        t.setSkill("java");

        Consultant c=new Consultant();
        c.setName("lisi");
        c.setSex("女");
        c.setServiceCost(99);

        System.out.println(t.getName()+"\t"+t.getSex()+"\t"+t.getSkill());
        System.out.println(c.getName()+"\t"+c.getSex()+"\t"+c.getServiceCost());
    }
}
