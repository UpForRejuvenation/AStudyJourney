package com.itheima.Demo1exception;

public class ExceptionDemo2 {
    public static void main(String[] args) {
        try {
            System.out.println(div(10,0));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static int div(int a, int b) throws Exception {
        if(b==0){
            throw new Exception("分母不能为0");
        }else{
            return a/b;
        }
    }
}
