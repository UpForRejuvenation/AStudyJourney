package com.itheima.Demo1exception;

public class ExceptionDemo3 {
    public static void main(String[] args) {
        try {
            saveAge(0);
        } catch (ItheimaAgeIllegalException e) {
            e.printStackTrace();
        }
    }

    public static void saveAge(int age) throws ItheimaAgeIllegalException {
        if(age < 1||age>200){
            throw new ItheimaAgeIllegalException("年龄输入有误，年龄不能低于1或高于200");
        }else{
            System.out.println("保存年龄成功");
            System.out.println("年龄："+age);
        }
    }
}
