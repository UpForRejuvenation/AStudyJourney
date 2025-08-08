package com.itheima.demo;

import java.util.Random;

public class CodeDemo1 {
    public static void main(String[] args) {
        System.out.println(getCode(4));
        System.out.println(getCode(6));
    }

    public static String getCode(int n) {
        String code = "";
        for (int i = 0; i < n; i++) {
            Random r = new Random();
            int type = r.nextInt(3);
            switch (type) {
                case 0:
                    int num = (int) (Math.random() * 10);
                    code += num;
                    break;
                case 1:
                    char ch = (char) (Math.random() * 26 + 'A');
                    code += ch;
                    break;
                case 2:
                    char CH = (char) (Math.random() * 26 + 'a');
                    code += CH;
                    break;

                default:
                    break;
            }
        }

        return code;
    }
}
