public class test9_ListNode {
    public static void main(String[] args) {
        int n = 10;
        ListNode head = ListNode.InitList(n);
        head.ShowList(head);

        head = head.ReverseList(head);
        head.ShowList(head);
    }
}
