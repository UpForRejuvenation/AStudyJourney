package com.itheima.Demo5genericity;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class Demo1genericity {
    public static void main(String[] args) {
        List<String> list=new ArrayList<String>();
        Set<String> set=new HashSet<String>();

        list.add("java");
        list.add("python");
        list.add("c++");
        list.add("java");

        set.add("java");
        set.add("python");
        set.add("c++");
        set.add("java");

        System.out.println(list);
        System.out.println(set);
    }
}
