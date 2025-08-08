package com.itheima.Demo1exception;

public class ExceptionDemo4 {
    public static void main(String[] args) {
        saveAge(300);
    }

    public static void saveAge(int age) throws ItheimaAgeIllegalRuntimeException {
        if(age < 1||age>200){
            throw new ItheimaAgeIllegalRuntimeException("年龄输入有误，年龄不能低于1或高于200");
        }else{
            System.out.println("保存年龄成功");
            System.out.println("年龄："+age);
        }
    }
}
