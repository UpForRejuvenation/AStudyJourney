package com.itheima.recursion;

import java.io.File;
import java.io.IOException;
import java.nio.file.Files;

/*
递归缺少边界条件
 */
public class demo2FileRecursion {
    public static void main(String[] args) {
        File dir = new File("D:/");
        // 要打开的程序全名，这里打开的是潜水员戴夫
        String fileName = "DaveTheDiver.exe";
        try {
            SearchFile(dir, fileName);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }

    /**
     * 递归实现文件搜索
     * @param dir 当前搜索文件夹
     * @param fileName 要搜索的文件名
     */
    public static void SearchFile(File dir, String fileName) throws IOException {
        System.out.println("当前文件夹是"+dir);
        if(dir == null || !dir.exists() || dir.isFile()){
            return;
        }

        File[] files = dir.listFiles();

        if(files!=null && files.length!=0){
            for(File file:files){
                if(file.isFile()){
                    if(file.getName().equals(fileName)){
                        System.out.println("找到目标文件"+file.getAbsoluteFile());
                        Runtime r = Runtime.getRuntime();
                        r.exec(file.getAbsolutePath());
                        break;
                    }
                } else {
                    SearchFile(file,fileName);
                }
            }
        }

    }
}
