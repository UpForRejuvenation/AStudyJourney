package com.itheima.demo1thread;

import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.FutureTask;

public class demo1ThreadCreate {
    /*
    main也是一个线程
     */
    public static void main(String[] args) {
        // 这是方式一，通过继承Thread类创建子线程
        // 直接调用run会当成普通方法执行，而不是创建一个线程
//        Thread t1 = new MyThread();
//        t1.start();

        // 方式二，通过runnable接口创建线程
//        Runnable r = new MyRunnable();
//        new Thread(r).start();
//
//        for(int i = 0; i < 10; i++){
//            System.out.println("主线程执行:"+i);
//        }

        // 方式三，通过Callable接口创建线程
        // 1.用Callable创建对象
        // 2.再用FutureTask封装
        // 3.最后将FutureTask送进Thread
        // 少一步，Thread对象.start()
        // 4.通过FutureTask对象的get()方法获得返回值
        Callable mc1 = new MyCallable(50);
        FutureTask ft1 = new FutureTask(mc1);
        Thread t1 = new Thread(ft1);
        t1.start();

        Callable mc2 = new MyCallable(100);
        FutureTask ft2 = new FutureTask(mc2);
        Thread t2 = new Thread(ft2);
        t2.start();

        try {
            System.out.println(ft1.get());
        } catch (Exception e) {
            e.printStackTrace();
        }

        try {
            System.out.println(ft2.get());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}


/**
 * 以下两种方法都不能得到线程要返回的值--------------------------------------------------------------
 */
// 方式一：通过extends Thread类创建线程
// 不能继承其他类
class MyThread extends Thread{
    @Override
    public void run(){
        for (int i = 0; i < 10; i++) {
            System.out.println("子线程执行:"+ i);
        }
    }
}

// 方式二，通过实现Runnable接口创建线程
// 可以继承其他类，可扩展性强
class MyRunnable implements Runnable{
    @Override
    public void run(){
        for (int i = 0; i < 10; i++) {
            System.out.println("子线程执行:"+ i);
        }
    }
}
//--------------------------------------------------------------------------------------------------

/**
 * 下面是方法三，通过实现Callable接口创建线程
 * 这种方法可以返回值
 */
class MyCallable implements Callable<String>{
    private int n;
    public MyCallable(int n){
        this.n=n;
    }
    @Override
    public String call() throws Exception{
        int sum=0;
        for (int i = 1; i <= n; i++) {
            sum+=i;
        }
        return "从1-"+n+"的和为："+sum;
    }
}