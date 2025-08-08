package com.itheima.demo;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        GoldCard gc1=new GoldCard("A202020","java","102301230",5000);
        pay(gc1);
        SilverCard sc1=new SilverCard("B202020","Python","202301230",4000);
        pay(sc1);
    }

    public static void pay(Card card){
        Scanner sc=new Scanner(System.in);
        System.out.println("请输入消费金额：");
        double csm=sc.nextDouble();
        card.consume(csm);
    }
}
