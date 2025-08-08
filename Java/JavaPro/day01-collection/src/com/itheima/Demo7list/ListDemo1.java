package com.itheima.Demo7list;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class ListDemo1 {
    public static void main(String[] args) {
        List<String> names=new ArrayList<String>();

        names.add("张三");
        names.add("李四");
        names.add("王五");
        System.out.println(names);

        names.add(2, "赵六");
        System.out.println(names);

        names.remove(2);
        System.out.println(names);

        names.set(2,"set");
        System.out.println(names);

        System.out.println(names.get(2));

        Iterator<String> it=names.iterator();
        while(it.hasNext()){
            System.out.println(it.next());
        }
    }

}
