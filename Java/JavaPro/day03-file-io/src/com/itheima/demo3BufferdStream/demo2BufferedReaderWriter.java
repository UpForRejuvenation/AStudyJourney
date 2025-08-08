package com.itheima.demo3BufferdStream;

import java.io.*;

public class demo2BufferedReaderWriter {
    public static void main(String[] args) {

        String srcPath = "test.txt";
        try (
                FileReader fr = new FileReader(srcPath);
                BufferedReader br = new BufferedReader(fr);

                FileWriter fw = new FileWriter("text2.txt",true);
                BufferedWriter bw = new BufferedWriter(fw);
                ) {
            /*
            readLine()的返回值是字符串或者null
            不能再用int类型的len接收
             */
            int len;
            String line;
            while((line = br.readLine())!=null){
                /*
                newLine()是换行，不是输入新行
                源码是    public void newLine() throws IOException {
                            write(System.lineSeparator());
                        }
                 */
//                bw.newLine(line);
                bw.write(line); //虽然读取了行，但没有读取到换行符
                bw.write("\r\n");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
