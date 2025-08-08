package com.itheima.NewInClass;

import javax.swing.*;

public class Test1 {
    public static void main(String[] args) {
        JFrame win=new JFrame();
        win.setSize(300,200);
        win.setLocationRelativeTo(null);
        win.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JPanel panel=new JPanel();
        win.add(panel);

        JButton button=new JButton("登录");
        panel.add(button);

//        button.addActionListener(new ActionListener(){
//            @Override
//            public void actionPerformed(ActionEvent e) {
//                System.out.println("登录成功");
//            }
//        });

        // 用e->重写匿名内部类
        button.addActionListener(e->System.out.println("登录成功"));

        win.setVisible(true);
    }
}
