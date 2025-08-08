package com.itheima.demo2Map;

import java.util.*;

public class Demo3Travel {
    public static void main(String[] args) {
        calc();
    }

    public static void calc(){
        List<String> locations = new ArrayList<>();
        String[] names = {"玉龙雪山", "西昌", "丽江", "大理", "昆明"};
        Random r = new Random();
        for (int i = 0; i < 80; i++) {
            int index = r.nextInt(names.length);
            locations.add(names[index]);
        }
        System.out.println(locations);

        Map<String, Integer> map = new HashMap<>();
        for(String location:locations){
//            if(map.containsKey(location)){
//                map.put(location, map.get(location)+1);
//            }else{
//                map.put(location, 1);
//            }
//            map.put(location, map.containsKey(location) ? map.get(location)+1 : 1);

            map.put(location, map.getOrDefault(location, 0)+1);
        }

        map.forEach((k,v)->{
            System.out.println(k + ":" + v);
        });
    }
}
