package com.itheima.Demo;

public class SmartJDController {
    private static final SmartJDController smartJDController = new SmartJDController();
    private SmartJDController(){}

    public static SmartJDController getInstance(){
        return smartJDController;
    }
    public void control(JD jd){
        System.out.println(jd.getName()+"当前状态："+(jd.isStatus()?"开启":"关闭"));
        jd.press();
        System.out.println(jd.getName()+"操作后状态："+(jd.isStatus()?"开启":"关闭"));
        System.out.println("操作完毕");
    }

    public void printAllJDInfo(JD[] jds){
        for (int i = 0; i < jds.length; i++) {
            System.out.println((i+1)+jds[i].getName()+"\t"+(jds[i].isStatus()?"开启":"关闭"));
        }
        System.out.println("0"+"退出程序");
    }
}
