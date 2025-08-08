public class test10_MergeList {
    public static void main(String[] args) {
        int len1 = 5;
        int len2 = 7;
        ListNode list1 = new ListNode().InitList(len1);
        ListNode list2 = new ListNode().InitList(len2);
        ListNode head = MergeList(list1, list2);
        head.ShowList(head);
    }

    public static ListNode MergeList(ListNode list1, ListNode list2){
        if(list1 == null || list2 == null){
            return list1 == null ? list2 : list1;
        }

        ListNode head = list1.val <= list2.val ? list1 : list2;
        ListNode pre = head;
        ListNode cur1 = head.next;
        ListNode cur2 = head == list1 ? list2 : list1;
        while(cur1 != null && cur2 != null){
            if(cur1.val <= cur2.val){
                pre.next = cur1;
                cur1 = cur1.next;
            } else {
                pre.next = cur2;
                cur2 = cur2.next;
            }
            pre = pre.next;
        }
        pre.next = cur1 == null ? cur2 : cur1;
        return head;
    }
}
