package com.itheima.gui;

import javax.swing.*;

public class GUIDemo1 {
    public static void main(String[] args) {
        JFrame jf=new JFrame();
        jf.setSize(400,300);
        jf.setLocationRelativeTo(null);
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JPanel jp=new JPanel();
        jf.add(jp);

        JButton jb=new JButton("登录");
        jp.add(jb);

        jf.setVisible(true);
    }
}
