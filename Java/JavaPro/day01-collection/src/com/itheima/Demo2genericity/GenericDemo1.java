package com.itheima.Demo2genericity;

import java.util.ArrayList;

public class GenericDemo1 {
    public static void main(String[] args) {
        ArrayList list = new ArrayList();

        list.add("hello");
        list.add("world");
        list.add(100);
        list.add(true);

        for (int i = 0; i < list.size(); i++) {
            Object obj= list.get(i);
            System.out.println(obj);
        }

        ArrayList<String> slist=new ArrayList<String>();
        slist.add("hello");
        slist.add("world");
        slist.add("java");
        for (int i = 0; i < slist.size(); i++) {
            String s=slist.get(i);
        }

    }
}
