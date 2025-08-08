package com.itheima.demo2Map;

import java.util.HashMap;
import java.util.Map;
import java.util.function.BiConsumer;

public class Demo2MapTravers {
    public static void main(String[] args) {
//        Map<String, Integer> map = new HashMap<>();
//        map.put("小王", 18);
//        map.put("小李", 19);
//        map.put("小张", 20);
//        map.put("小刘", 21);
//
//        // 1.根据键找值
//        for (String key:map.keySet()){
//            int value = map.get(key);
//            System.out.println(key + ":" + value);
//        }
        // 2.键值对
        Map<String, String> map_str = new HashMap<>();
        map_str.put("小王", "小王");
        map_str.put("小张", "小张");
        map_str.put("小王", "小王");
        map_str.put("小李", "小李");
        // entry对象
        for (Map.Entry<String, String> entry : map_str.entrySet()) {
            String key = entry.getKey();
            String value = entry.getValue();
            System.out.println(key + ":" + value);
            System.out.println(entry); // 直接打印，打印结果用等号连接
        }

        // 3.lambda
        /*
        本质上还是Map.Entry()
         */
//        Map<String, Integer> map = new HashMap<>();
//        map.put("小王", 18);
//        map.put("小李", 19);
//        map.put("小张", 20);
//        map.put("小刘", 21);
//        map.forEach(new BiConsumer<String, Integer>() {
//            @Override
//            public void accept(String s, Integer integer) {
//                System.out.println(s + ":" + integer);
//            }
//        });
//        map.forEach((k, v) -> System.out.println(k + ":" + v));
//
    }
}
