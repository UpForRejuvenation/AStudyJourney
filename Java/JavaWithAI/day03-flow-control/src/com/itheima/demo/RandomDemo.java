package com.itheima.demo;

import java.util.Random;
import java.util.Scanner;

public class RandomDemo {
    public static void main(String[] args) {
        // 调用Random方法生成一个1-100的随机数
        Random r=new Random();
        int num=r.nextInt(100)+1;//[0,99]--->[1,100]

        Scanner sc=new Scanner(System.in);

        while (true){
            System.out.println("请输入一个1-100的数字：");
            int input=sc.nextInt();

            if(input==num){
                System.out.println("恭喜你猜对了！");
                break;
            }else if(input>num){
                System.out.println("猜大了！");
            }else{
                System.out.println("猜小了！");
            }
        }
    }
}
