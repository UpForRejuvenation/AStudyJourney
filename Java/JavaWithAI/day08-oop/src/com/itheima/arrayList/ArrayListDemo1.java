package com.itheima.arrayList;

import java.util.ArrayList;

public class ArrayListDemo1 {
    public static void main(String[] args) {
        ArrayList list=new ArrayList<>();

        list.add("Java");
        list.add("Python");
        list.add("C++");
        list.add(3);
//        System.out.println(list);

//        for (int i = 0; i < list.size(); i++) {
//            System.out.println(list.get(i));
//        }

//        list.remove(Integer.valueOf(3));
        System.out.println(list);
    }
}
