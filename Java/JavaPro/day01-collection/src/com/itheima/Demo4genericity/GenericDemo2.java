package com.itheima.Demo4genericity;

import java.util.ArrayList;

public class GenericDemo2 {
    public static void main(String[] args) {
        ArrayList<Xiaomi> xmList=new ArrayList<Xiaomi>();
        xmList.add(new Xiaomi());
        xmList.add(new Xiaomi());
        xmList.add(new Xiaomi());
    }

    // "?"通配符，extends Car上限，super Car下限
    public static void go(ArrayList<? extends Car> list){
        for (int i = 0; i < list.size(); i++)
            System.out.println(list.get(i)+"go");

    }
}
