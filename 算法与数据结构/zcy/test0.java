/*
 * 这是一个测试类，用于测试各种各样算法或者错误
 */

import java.util.Queue;
import java.util.Random;
import java.util.Scanner;

public class test0{
    public static void main(String[] args) {
        // test12 测试
        // ListNode l1 = ListNode.InitWithSc();
        // l1.ShowList(l1);
        // test12_DivideList solu = new test12_DivideList();

        // Scanner sc = new Scanner(System.in);
        // System.out.print("输入按x分割：");
        // int x = sc.nextInt();
        // l1 = solu.DivideList(l1, x);
        // l1.ShowList(l1);


        test16_Deque solu = new test16_Deque();
        test16_Deque.MyCircularDeque deque = solu.new MyCircularDeque(2);
    }
}