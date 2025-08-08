package com.itheima.enumDemo;

public class Main {
    public static void main(String[] args) {
        move(Direction.Up);
        move(Direction.Down);
        move(Direction.Left);
        move(Direction.Right);
    }

    public static void move(Direction direction) {
        switch (direction) {
            case Up:
                System.out.println("向上移动");
                break;
            case Down:
                System.out.println("向下移动");
                break;
            case Left:
                System.out.println("向左移动");
                break;
            case Right:
                System.out.println("向右移动");
                break;
            default:
                System.out.println("无效的方向");
               break;
        }
    }
}
