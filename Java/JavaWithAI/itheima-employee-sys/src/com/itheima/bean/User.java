package com.itheima.bean;

// 用户信息包含用户名，密码，登录名。
public class User {
    private String username; // 用户名
    private String password; // 密码
    private String loginName; // 登录名

    public User() {};

    public User(String username, String password, String loginName) {
        this.username = username;
        this.password = password;
        this.loginName = loginName;
    }

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    public String getLoginName() {
        return loginName;
    }

    public void setLoginName(String loginName) {
        this.loginName = loginName;
    }

}