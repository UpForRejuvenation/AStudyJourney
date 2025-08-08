package com.itheima.demo2CharStream;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.Reader;

public class demo1CharStream {
    public static void main(String[] args) {
        try (
                /*
                写在try()中的内容，会自动调用close()方法关闭流
                 */
                Reader fs = new FileReader("test.txt");
                ){
            char[] chs = new char[3];
            int len =0;
            while((len = fs.read(chs))!=-1){
                String str = new String(chs, 0, len);
                System.out.print(str);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }

    }

}
