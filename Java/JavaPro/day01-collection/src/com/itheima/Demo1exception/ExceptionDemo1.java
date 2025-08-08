package com.itheima.Demo1exception;

import javax.xml.crypto.Data;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class ExceptionDemo1 {
    public static void main(String[] args){
        try {
            method2();
        } catch (ParseException e) {
            e.printStackTrace();
        }
    }

    // 定义一个方法，认识编译时异常
    public static void method2() throws ParseException {
        String str="2025-05-26 11:21:55";
        SimpleDateFormat sdf=new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
        Date date =  sdf.parse(str);
        System.out.println(date);
    }

    public static void method1(){
        // runtime exception
        // 1.  ArrayIndexOutOfBoundsException
        System.out.println("ArrayIndexOutOfBoundsException");
        int[] show={1,2,3};
        System.out.println(show[3]);

        // 2.  NullPointerException
        System.out.println("NullPointerException");
        String name=null;
        System.out.println(name);
        System.out.println(name.length());

        // 3. ArithmeticException
        System.out.println("ArithmeticException");
        System.out.println(10/0);
    }

}
