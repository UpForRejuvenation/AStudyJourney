package com.itheima.Demo8set;

import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.TreeSet;

public class Test {
    public static void main(String[] args) {
        /*
        HashSet不支持索引，因为无序，不能将第一个add的视为索引0
        LinkedHashSet有序不重复无索引,底层基于哈希表，使用双链表记录添加顺序
         */
        Set<String> set=new LinkedHashSet<String>();
        set.add("shabi");
        set.add("shabi");
        set.add("shabi");
        set.add("java");
        set.add("毕业快乐");

        /*
        TreeSet默认从小到大排序
         */
        Set<Double> set1 = new TreeSet<Double>();
        set1.add(1.0);
        set1.add(3.14);
        set1.add(2.0);
        set1.add(0.5);
        set1.add(1.0);
//        System.out.println(set1[0]);
        System.out.println(set1);
    }
}
