package com.itheima.demo1;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@AllArgsConstructor
@NoArgsConstructor
public class Teacher implements Comparable<Teacher>{
    private String name;
    private int age;
    private double salary;

    @Override
    public String toString() {
        return "Teacher{" +
                "name='" + name + '\'' +
                ", age=" + age +
                ", salary=" + salary +
                '}'+'\n';
    }

    @Override
    public int compareTo(Teacher o) {
        /*
        逻辑为：左边大于右边return +1，右边大于左边return -1，相同return 0
        如果想保存相同数据，可以设置相同时不为0
         */
        return this.getAge() - o.getAge();
    }

}
