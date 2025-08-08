package com.itheima.charset;

import java.io.UnsupportedEncodingException;
import java.util.Arrays;

public class demo1charset {
    public static void main(String[] args) throws Exception {
        String s = "阿米娅";
        byte[] bytes = s.getBytes("GBK");
        System.out.println(bytes); // 这个打印的是地址
        System.out.println(Arrays.toString(bytes));

        String name = new String(bytes, "GBK");
        System.out.println(name);
    }
}
