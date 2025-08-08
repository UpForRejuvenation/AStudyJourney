package com.itheima.demo4CommensIo;

import org.apache.commons.io.FileUtils;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.nio.file.Files;
import java.nio.file.Path;

public class demo1test {
    public static void main(String[] args) throws Exception {
        // Commens IO
        FileUtils.copyFile(new File("test.txt"), new File("test3.txt"));

        // JDK7
        // 要用path.of
        Files.copy(Path.of("test.txt"), Path.of("test4.txt"));
    }
}
