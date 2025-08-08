package com.itheima.demo;

import java.util.Scanner;

public class BMIandBMR {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入身高(m)：");
        double height = sc.nextDouble();
        System.out.println("请输入体重(kg)：");
        double kg = sc.nextDouble();
        System.out.println("请输入性别(男/女)：");
        String sex = sc.next();
        double bmi=calBMI(height, kg);
        double bmr=calBMR(height, kg, sex);
        System.out.println("BMI："+bmi);
        System.out.println("BMR："+bmr);
    }

    public static double calBMI(double height, double kg){
        return kg/(height*height);
    }

    // 按照性别计算BMR
    public static double calBMR(double height, double kg, String sex){
        if(sex.equals("男")){
            return 66 + 13.7*kg + 5*height - 6.8*20;
        }else{
            return 655 + 9.6*kg + 1.8*height - 4.7*20;
        }
    }
}
