package com.itheima.array;

public class PokerDemo {
    public static void main(String[] args) {
        String[] poker=new String[54];
        start(poker);
        shuffle(poker);
    }

    public static void start(String[] poker){

        String[] colors={"♠","♥","♦","♣"};
        String[] numbers={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};

        int index=0;
        for (int i = 0; i < numbers.length; i++) {
            for (int j = 0; j < colors.length; j++) {
                poker[index++]=colors[j]+numbers[i];
            }
        }

        poker[index++]="小王";
        poker[index]="大王";

        print(poker);
    }

    public static void shuffle(String[] poker){
        // 方法1，随机一个索引
        for (int i = 0; i < poker.length; i++) {
            int index=(int)(Math.random()*poker.length);
            String temp=poker[i];
            poker[i]=poker[index];
            poker[index]=temp;
        }

        print(poker);

        // 方法2，每次循环取两个索引交换
        for (int i = 0; i < poker.length; i++) {
            int index1=(int)(Math.random()*poker.length);
            int index2=(int)(Math.random()*poker.length);
            String temp=poker[index1];
            poker[index1]=poker[index2];
            poker[index2]=temp;
        }

        print(poker);
    }

    public static void print(String[] poker){
        for (int i = 0; i < poker.length; i++) {
            System.out.print(poker[i]+"\t");
            if((i+1)%4==0){
                System.out.println();
            }
        }
        System.out.println();
    }
}
