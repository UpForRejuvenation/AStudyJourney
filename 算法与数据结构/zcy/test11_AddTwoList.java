public class test11_AddTwoList {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        if (l1 == null || l2 == null) {
            return l1 == null ? l2 : l1;
        }

        int carry = 0;
        ListNode head = null;
        ListNode pre = head;
        for(int sum, val;
            l1 != null || l2 != null;
            l1 = l1 != null ? l1.next : null,
            l2 = l2 != null ? l2.next : null){

                sum = (l1 == null ? 0 : l1.val) +
                      (l2 == null ? 0 : l2.val) + 
                      carry;
                
                val = sum % 10;
                carry = sum / 10;

                if(head == null){
                    head = new ListNode(val);
                    pre = head;
                } else {
                    pre.next = new ListNode(val);
                    pre = pre.next;
                }
            }
        
        if(carry == 1){
            pre.next = new ListNode(1);
        }
        return head;
    }
}
