package com.itheima.demo2Map;

import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;

public class Demo1map {
    public static void main(String[] args) {
        // 无序，不重复，无索引
        Map<String, Integer> map = new HashMap<>();

        // 因为键不能重复，所以，如果添加的键已经存在，那么，新的值会替换掉旧的值
        map.put("小王", 18);
        map.put("小李", 19);
        map.put("小张", 20);
        map.put("小刘", 21);

        System.out.println(map);
        System.out.println(map.size());

        Set<String> set = map.keySet();
        System.out.println( set);

        for(String key : set){
            System.out.println(key + ":" + map.get(key));
        }
        Collection<Integer> values = map.values();
        for(int value : values){
            System.out.println(value);
        }
    }
}
