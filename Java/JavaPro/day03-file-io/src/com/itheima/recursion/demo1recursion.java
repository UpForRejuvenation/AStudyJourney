package com.itheima.recursion;

public class demo1recursion {
    public static void main(String[] args) {
        System.out.println(monkey(1));
        System.out.println(monkey(2));
        System.out.println(monkey(3));
        System.out.println(monkey(4));
        System.out.println(monkey(5));
    }

    public static int monkey(int day){
        if(day == 1){
            return 1;
        }
        return (monkey(day-1)+1)*2;
    }
}
