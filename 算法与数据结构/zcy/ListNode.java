import java.util.Scanner;

public class ListNode {
    int val;
    ListNode next;

    public ListNode() {
    }

    public ListNode(int val) {
        this.val = val;
    }

    public ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }

    public static ListNode InitList(int n) {
        ListNode head = null;
        ListNode tail = null;
        for (int i = 0; i < n; i++) {
            ListNode node = new ListNode(i);
            if (head == null) {
                head = node;
                tail = node;
            } else {
                tail.next = node;
                tail = tail.next;
            }
        }

        return head;
    }

    public static void ShowList(ListNode head) {
        System.out.print("链表的顺序为：");
        while (head != null) {
            System.out.printf("%d ", head.val);
            head = head.next;
        }
        System.out.println();
    }

    public static ListNode ReverseList(ListNode head) {
        ListNode next = null;
        ListNode pre = null;
        while (head != null) {
            next = head.next;
            head.next = pre;
            pre = head;
            head = next;
        }

        return pre;
    }

    public static ListNode InitWithSc() {
        Scanner sc = new Scanner(System.in);
        System.out.print("输入链表长度：");
        int length = sc.nextInt();

        if(length <= 0){
            return null;
        }
        
        ListNode head = new ListNode();
        ListNode pre = new ListNode();
        pre = head;

        System.out.print("输入链表数据：");
        for (int i = 0; i < length; i++) {
            int num = sc.nextInt();
            if (i == 0) {
                head.val = num;
                pre = head;
            } else {
                ListNode tail = new ListNode();
                tail.val = num;
                pre.next = tail;
                pre = tail;
            }
        }
        return head;
    }
}
