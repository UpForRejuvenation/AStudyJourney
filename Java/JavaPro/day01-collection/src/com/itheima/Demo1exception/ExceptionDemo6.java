package com.itheima.Demo1exception;

import java.util.Scanner;

public class ExceptionDemo6 {
    public static void main(String[] args) {
        while (true) {
            try{
                double price=inputPrice();
                break;
            } catch (Exception e) {
                System.out.println("输入价格有误！");
            }
        }
    }

    public static double inputPrice(){
        Scanner sc=new Scanner(System.in);
        System.out.println("请输入商品价格：");
        double price=sc.nextDouble();
        System.out.println("价格:"+price);
        return price;
    }
}
