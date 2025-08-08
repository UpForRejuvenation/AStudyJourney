package com.itheima.demo1copy;

import java.io.*;

public class Demo1CopyPic {
    public static void main(String[] args) {
        String srcPath = "D:\\iostream.png";
        String destPath = "E:\\iostream_copy.png";
        try {
            copyFile(srcPath, destPath);
        } catch (Exception e) {
            e.printStackTrace();
        } 
    }

    public static void copyFile(String srcPath, String destPath) throws Exception {
        InputStream is = new FileInputStream(srcPath);
        OutputStream os = new FileOutputStream(destPath);

        byte[] buffer = new byte[1024];
        int count = 0;
        while((count = is.read(buffer)) != -1){
            os.write(buffer, 0, count);
        }
        System.out.println("复制完毕");
    }
}
