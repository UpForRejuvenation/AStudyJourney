package com.itheima.gui;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class LoginJFream extends JFrame implements ActionListener {
    public LoginJFream() {
        this.setTitle("登录界面");
        this.setSize(400, 300);
        this.setLocationRelativeTo(null);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);
        init();
    }

    private void init() {
        JButton jb= new JButton("登录");
        jb.addActionListener(this);

        JPanel jp=new JPanel();
        this.add(jp);

        jp.add(jb);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        JOptionPane.showMessageDialog(this,"有人点击了登录按钮");
    }
}
