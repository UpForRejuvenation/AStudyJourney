package com.itheima.demo2CharStream;

import java.io.FileWriter;
import java.io.IOException;
import java.io.Writer;

public class demo2FileWriter  {
    public static void main(String[] args) {
        try (
                // 新增写在这里添加true，不添加默认是覆盖写
                /*
                没有文件会创建文件
                 */
                Writer fw = new FileWriter("test.txt",true);
                ){
            fw.write("\r\n");
            fw.write("东隅已逝，桑榆非晚");

            /*
            刷新缓冲区，将数据写入文件
            由于try()中定义的变量fw，自动调用close()方法，
             */
            // fw.flush();
        } catch (IOException e) {
            throw new RuntimeException(e);
        }

    }
}
