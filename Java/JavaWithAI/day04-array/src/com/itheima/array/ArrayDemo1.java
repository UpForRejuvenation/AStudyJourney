package com.itheima.array;

import java.util.Scanner;

public class ArrayDemo1 {
    public static void main(String[] args) {

        double[] score=new double[10];

        InputScore(score);
        calAverage(score);
        minMax(score);
    }

    public static void InputScore(double score[]){
        Scanner sc=new Scanner(System.in);
        for(int i =0;i<score.length;i++){
            System.out.println("请输入第"+(i+1)+"个学生成绩:");
            score[i]=sc.nextDouble();
        }
    }

    public static void calAverage(double score[]){
        double sum=0;
        for(int i=0;i<score.length;i++){
            sum+=score[i];
        }
        System.out.println("平均成绩为:"+sum/score.length);
    }

    public static void minMax(double score[]){
        double max=score[0];
        double min=score[0];
        for(int i=0;i<score.length;i++){
            // 用temp存储临时变量，可以减少访问数组次数，优化程序运行时间
            // 效果疑似微乎其微
            double temp=score[i];
            if(score[i]>max){
                max=temp;
            }
            if(score[i]<min){
                min=temp;
            }
        }
        System.out.println("最大成绩为:"+max);
        System.out.println("最小成绩为:"+min);
    }
}
