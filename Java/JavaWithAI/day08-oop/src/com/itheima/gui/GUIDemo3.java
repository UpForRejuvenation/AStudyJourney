package com.itheima.gui;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class GUIDemo3 {
    public static void main(String[] args) {
        JFrame jf = new JFrame("登录窗口");

        JPanel jp = new JPanel();
        jf.add(jp);

        jf.setSize(400,300);
        jf.setLocationRelativeTo(null);
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JButton jb = new JButton("登录");
        jp.add(jb);

        jf.setVisible(true);

        jb.addActionListener(new MyActionListener(jf));
    }
}


// 方法一，创建一个类实现ActionListener接口
class MyActionListener implements ActionListener {
    private JFrame jf;
    public MyActionListener(JFrame jf) {
        this.jf = jf;
    }
    @Override
    public void actionPerformed(ActionEvent e) {
        JOptionPane.showMessageDialog(jf,"有人点击了登录按钮");
    }
}
