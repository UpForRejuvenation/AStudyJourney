import java.util.Scanner;

public class test {
    public static void main(String[] args) {
        // int n=10;
        // Q206 solu=new Q206();
        // ListNode head = ListNode.InitList(n);
        // head.ShowList(head);
        // head = head.ReverseList(head);
        // head.ShowList(head);

        /*
         * Q2测试
         */
        // Scanner sc = new Scanner(System.in);
        // System.out.print("输入链表1长度：");
        // int len1 = sc.nextInt();
        // System.out.print("输入链表2长度：");
        // int len2 = sc.nextInt();
        // ListNode l1 = ListNode.InitWithSc(len1);
        // ListNode l2 = ListNode.InitWithSc(len2);
        // ListNode.ShowList(l1);
        // ListNode.ShowList(l2);

        // Q2 solu = new Q2();
        // ListNode l3 = solu.addTwoNumbers_zcy(l1, l2);
        // l3.ShowList(l3);

        /*
         * 将类中的内声明为static可以直接通过<.类名>声明
         */
        // Q622.MyCircularQueue queue = new Q622.MyCircularQueue(5);
        // System.out.println(queue.size());
        
        Scanner sc = new Scanner(System.in);
        System.out.println("输入数组长度");
        int length = sc.nextInt();
        int[] fruits = new int[length];
        int[] baskets = new int[length];

        System.out.println("输入fruits：");
        for(int i=0;i<length;i++){
            fruits[i] = sc.nextInt();
        }

        System.out.println("输入baskets：");
        for(int i=0;i<length;i++){
            baskets[i] = sc.nextInt();
        }

        Q3479 solu = new Q3479();
        int ans = solu.numOfUnplacedFruits(fruits, baskets);
        System.out.println("结果是：");
        System.out.println(ans);
    }

}
