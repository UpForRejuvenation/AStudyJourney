package com.itheima.demo3Stream;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Stream;

public class demo3 {
    public static void main(String[] args) {
        List<String> list = new ArrayList<>();
        list.add("阿米娅");
        list.add("凯尔希");
        list.add("斯卡蒂");
        list.add("陈");

        List<Double> scores = new ArrayList<>();
        scores.add(70.0);
        scores.add(90.0);
        scores.add(90.0);
        scores.add(60.0);
        scores.add(80.0);

        // stream流排序，默认升序
        System.out.println("stream流排序，默认升序");
        scores.stream().sorted().forEach(System.out::println);

        // 重写stream流中的sorted方法
        System.out.println("重写stream流中的sorted方法");
        scores.stream().sorted((s1, s2) -> Double.compare(s2, s1)).forEach(System.out::println);

        System.out.println("stream流的limit方法");
        scores.stream().sorted((s1,s2)->Double.compare(s2,s1)).limit(2).forEach(System.out::println);

        System.out.println("stream流的skip方法");
        scores.stream().sorted((s1,s2)->Double.compare(s2,s1)).skip(2).forEach(System.out::println);

        System.out.println("stream流中的distinct方法");
        scores.stream().distinct().forEach(System.out::println);

        System.out.println("map方法，对原数据进行加工");
        scores.stream().map(s->"加十分后："+(s+10)).forEach(System.out::println);

        Stream<String> stream_str = list.stream();

        Stream<Double> stream_dou = scores.stream();
        Stream<Object> stream3 = Stream.concat(stream_str, stream_dou);
        System.out.println("concat方法");
        stream3.forEach(System.out::println);
    }
}
