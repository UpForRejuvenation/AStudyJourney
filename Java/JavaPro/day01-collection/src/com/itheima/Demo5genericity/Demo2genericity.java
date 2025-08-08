package com.itheima.Demo5genericity;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;

public class Demo2genericity {
    public static void main(String[] args) {

        Collection<String> list=new ArrayList<String>();
        list.add("java");
        list.add("python");
        list.add("c++");
        list.add("java");

        // 迭代器
        Iterator<String> it=list.iterator();
        while(it.hasNext()){
            String name=it.next();
            System.out.println(name);
        }

        // 增强for循环
        for(String name:list){
            System.out.println(name);
        }
    }

}
