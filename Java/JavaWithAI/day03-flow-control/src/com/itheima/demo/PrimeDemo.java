package com.itheima.demo;

import java.util.Scanner;

public class PrimeDemo {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("input a:");
        int a=sc.nextInt();
        System.out.println("input b:");
        int b=sc.nextInt();

        int count=0;
        for(int i=a;i<=b;i++){
            if(isPrime(i))
                System.out.println(i);
                count++;
        }
        System.out.println("count="+count);
    }

    public static boolean isPrime(int n){
        if(n<=1){
            return false;
        }

        for(int i=2;i<=Math.sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}
