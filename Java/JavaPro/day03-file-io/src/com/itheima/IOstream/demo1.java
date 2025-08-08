package com.itheima.IOstream;

import java.io.FileInputStream;
import java.io.InputStream;

public class demo1 {
    public static void main(String[] args) throws Exception {
        String path = "test.txt";
        InputStream is = new FileInputStream(path);

        // 用byte类型的数组遍历is中的内容
        byte[] bytes = new byte[1024];
        int readCount = 0;
        while ((readCount = is.read(bytes)) != -1) {
            System.out.print(new String(bytes, 0, readCount));
        }
    }
}
