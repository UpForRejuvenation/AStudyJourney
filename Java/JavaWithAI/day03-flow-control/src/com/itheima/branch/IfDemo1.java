package com.itheima.branch;

import java.util.Scanner;

public class IfDemo1 {
    public static void main(String[] args) {
        IfDemo1();
    }

    public static void IfDemo1() {
        System.out.println("input score:");
        Scanner sc = new Scanner(System.in);
        int score = sc.nextInt();
        if (score >= 90) {
            System.out.println("A");
        } else if (score >= 80) {
            System.out.println("B");
        } else if (score >= 70) {
            System.out.println("C");
        } else if (score >= 60) {
            System.out.println("D");
        } else if(score<0){
            System.out.println("error");
        } else {
            System.out.println("E");
        }
    }
}
