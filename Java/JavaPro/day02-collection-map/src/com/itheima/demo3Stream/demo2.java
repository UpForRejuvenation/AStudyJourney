package com.itheima.demo3Stream;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.stream.Stream;

public class demo2 {
    public static void main(String[] args) {
        Collection<String> list=new ArrayList<String>();
        Stream<String> s1 = list.stream();

        Map<String, Integer> map=new HashMap<String, Integer>();
        // 通过map集合获取一个stream键流
        Stream<String> s2 = map.keySet().stream();
        // 通过map集合获取一个stream值流
        Stream<Integer> s3 = map.values().stream();
        // 通过map集合获取一个stream键值对流
        Stream<Map.Entry<String, Integer>> s4 = map.entrySet().stream();
    }
}
