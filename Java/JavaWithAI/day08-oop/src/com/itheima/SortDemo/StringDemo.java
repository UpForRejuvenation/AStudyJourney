package com.itheima.SortDemo;

import java.util.Arrays;

public class StringDemo {
    public static void main(String[] args) {
        String[] names= {"Geoge", "Angla", "East", "bob", "andy","david", "candy","Body"};

//        Arrays.sort(names, new Comparator<String>() {
//            @Override
//            public int compare(String o1, String o2) {
//                return o1.compareToIgnoreCase(o2);
//            }
//        });

//        Arrays.sort(names,(o1,o2)->o1.compareToIgnoreCase(o2));

        Arrays.sort(names,String::compareToIgnoreCase);

        System.out.println(Arrays.toString(names));
    }
}
