package com.itheima.gui;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

public class GUIDemo2 extends JFrame {

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            GUIDemo2 frame = new GUIDemo2();
            frame.setVisible(true);
        });
    }

    private JTextField usernameField;
    private JPasswordField passwordField;

    public GUIDemo2() {
        setTitle("登录界面");
        setSize(350, 250);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        // 设置背景颜色
        getContentPane().setBackground(new Color(255, 255, 255));

        // 创建面板
        JPanel panel = new JPanel();
        panel.setBackground(getContentPane().getBackground());
        panel.setLayout(new GridBagLayout());

        GridBagConstraints gbc = new GridBagConstraints();
        gbc.insets = new Insets(10, 10, 10, 10);

        // 添加用户名标签和文本框
        JLabel usernameLabel = new JLabel("用户名:");
        gbc.gridx = 0;
        gbc.gridy = 0;
        panel.add(usernameLabel, gbc);

        usernameField = new JTextField(20);
        gbc.gridx = 1;
        gbc.gridy = 0;
        panel.add(usernameField, gbc);

        // 添加密码标签和密码框
        JLabel passwordLabel = new JLabel("密码:");
        gbc.gridx = 0;
        gbc.gridy = 1;
        panel.add(passwordLabel, gbc);

        passwordField = new JPasswordField(20);
        gbc.gridx = 1;
        gbc.gridy = 1;
        panel.add(passwordField, gbc);

        // 添加登录按钮
        JButton loginButton = new JButton("登录");
        gbc.gridx = 1;
        gbc.gridy = 2;
        gbc.anchor = GridBagConstraints.CENTER;
        panel.add(loginButton, gbc);

        loginButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String username = usernameField.getText();
                char[] passwordChars = passwordField.getPassword();
                String password = new String(passwordChars);

                JOptionPane.showMessageDialog(GUIDemo2.this,"有人点击了登录");
                if ("admin".equals(username) && "password".equals(password)) {
                    JOptionPane.showMessageDialog(GUIDemo2.this, "登录成功!", "信息", JOptionPane.INFORMATION_MESSAGE);
                } else {
                    JOptionPane.showMessageDialog(GUIDemo2.this, "用户名或密码错误!", "错误", JOptionPane.ERROR_MESSAGE);
                }


            }

        });
        // 为窗口添加按键监听器，监听上下左右四个箭头
        this.setFocusable(true);// 让窗口成为焦点窗口
        this.requestFocusInWindow();

        this.addKeyListener(new KeyAdapter() {
            @Override
            public void keyPressed(KeyEvent e) {
                int keyCode = e.getKeyCode();
                if (keyCode == KeyEvent.VK_UP)
                    JOptionPane.showMessageDialog(GUIDemo2.this, "检测到上键按下");
                else if (keyCode == KeyEvent.VK_DOWN)
                    JOptionPane.showMessageDialog(GUIDemo2.this, "检测到下键按下");
                else if (keyCode == KeyEvent.VK_LEFT) {
                    JOptionPane.showMessageDialog(GUIDemo2.this, "检测到左键按下");
                } else if (keyCode == KeyEvent.VK_RIGHT) {
                    JOptionPane.showMessageDialog(GUIDemo2.this, "检测到右键按下");
                }
            }
        });

        add(panel);
    }


}