package com.itheima.Demo;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        JD[] jds=new JD[4];
        jds[0]=new Lamp("灯泡",true);
        jds[1]=new WashMachine("洗衣机",false);
        jds[2]=new Television("电视",false);
        jds[3]=new AirConditioner("空调",false);

        SmartJDController sjc=SmartJDController.getInstance();

        while(true){
            sjc.printAllJDInfo(jds);
            System.out.println("请输入你要控制的设备编号：");
            Scanner sc=new Scanner(System.in);

            String input=sc.next();
            switch(input){
                case "1":
                    sjc.control(jds[0]);
                    break;
                case "2":
                    sjc.control(jds[1]);
                    break;
                case "3":
                    sjc.control(jds[2]);
                    break;
                case "4":
                    sjc.control(jds[3]);
                    break;
                case "0":
                    System.out.println("退出程序");
                    return;
                default:
                    System.out.println("输入有误，请重新输入");
                   break;
            }
        }
    }
}
