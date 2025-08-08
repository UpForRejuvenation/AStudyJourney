package com.itheima.demo3BufferdStream;

import java.io.*;

public class demo1BufferedStream {
    public static void main(String[] args) throws Exception{
        /*
        字节流用Buffered-Input/Output-Stream
        字符流用Buffered-Reader/Writer
            Buf-Read多了一个readLine()功能,可以按行读取
            Buf-Writ多一个newLine()功能，可以换行
         */
        String path = "D:/iostream.png";
        FileInputStream fis = new FileInputStream(path);
        InputStream bis = new BufferedInputStream(fis);

        FileOutputStream fos = new FileOutputStream("E:/iostream_copy2.png");
        OutputStream bos = new BufferedOutputStream(fos);

        int len = 0;
        byte[] bytes = new byte[1024];
        while((len = bis.read(bytes))!=-1){
            bos.write(bytes,0,len);
        }
        System.out.println("复制完毕");
    }
}
