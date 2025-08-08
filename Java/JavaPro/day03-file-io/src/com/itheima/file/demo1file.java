package com.itheima.file;

import java.io.File;

public class demo1file {
    public static void main(String[] args) {
        File f1 = new File("day03-file-io\\src\\test.txt");
        System.out.println(f1.getPath());
        System.out.println(f1.length());
        System.out.println(f1.delete());;
    }
}
