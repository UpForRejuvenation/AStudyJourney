package com.itheima.demo;

import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("input a:");
        double a=sc.nextDouble();
        System.out.println("input b:");
        double  b=sc.nextDouble();
        System.out.println("input operator:");
        char operator=sc.next().charAt(0);

        calculate(a,b,operator);
    }

    public static void calculate(double a,double b,char operator){
        double result=0;
        switch (operator){
            case '+':
                result=a+b;
                break;
            case '-':
                result=a-b;
                break;
            case '*':
                result=a*b;
                break;
            case '/':
                result=a/b;
                break;
            default:
                System.out.println("operator error");
                break;
       }
        System.out.println("result:"+result);
    }
}
