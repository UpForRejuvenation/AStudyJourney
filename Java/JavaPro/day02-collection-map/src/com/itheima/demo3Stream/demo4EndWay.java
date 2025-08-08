package com.itheima.demo3Stream;

import java.util.ArrayList;
import java.util.List;
import java.util.Optional;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class demo4EndWay {
    public static void main(String[] args) {
        List<Teacher> list = new ArrayList<>();
        list.add(new Teacher("李四", 19, 6000.0));
        list.add(new Teacher("张三", 18, 5000.0));
        list.add(new Teacher("赵六", 21, 8000.0));
        list.add(new Teacher("王五", 20, 7000.0));

        Stream<Teacher> teacher_stream = list.stream();

        Optional<Teacher> max = list.stream().max((t1, t2)->t1.getSalary().compareTo(t2.getSalary()));
        Teacher maxTeacher = max.get();
        System.out.println(maxTeacher);
        // Collectors有toList, toSet, toMap
        teacher_stream.collect(Collectors.toList());
    }
}
