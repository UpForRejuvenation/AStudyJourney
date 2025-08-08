package com.itheima.demo3Stream;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class demo1Stream {
    public static void main(String[] args) {
        List<String> list=new ArrayList<String>();
        list.add("张三丰");
        list.add("张翠山");
        list.add("周芷若");
        list.add("张三");
        list.add("小昭");

        // 操作集合或者数组的工具
        // 结合了lambda表达式
        List<String> list1=list.stream().filter(s -> s.startsWith("张")).filter(s -> s.length()==3).collect(Collectors.toList());
        System.out.println(list1);
    }
}
