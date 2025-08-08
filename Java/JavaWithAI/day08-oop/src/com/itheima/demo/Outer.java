package com.itheima.demo;

public class Outer {
    public void show(){
        System.out.println("Outer的show方法被执行");
    }

    public class Inner{
        public void show(){
            System.out.println("Inner的show方法被执行");
        }

        public void showOuter(){
            Outer.this.show();
        }
    }

    public static void main(String[] args) {
        Outer.Inner inner=new Outer().new Inner();
        inner.show();
        inner.showOuter();

        Outer outer=new Outer();
        outer.show();
    }
}
