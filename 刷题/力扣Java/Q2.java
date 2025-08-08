import java.util.List;

public class Q2 {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        if(l1 == null || l2 == null){
            return l1 == null ? l2 : l1;
        }

        int sum = l1.val + l2.val;
        ListNode head = new ListNode(sum % 10);
        // head.val = (l1.val + l2.val) % 10;
        int carry = (sum) /10;
        head.next = null;
        ListNode pre = head;
        l1 = l1.next;
        l2 = l2.next;
        while(l1 != null && l2 != null){
            // 通过pre.next = new ListNode(val);新建节点，不用下面这句话
            // ListNode tail = new ListNode(); // 每次都要新建节点，防止修改现有节点

            sum = l1.val + l2.val + carry;
            pre.next = new ListNode(sum % 10);
            pre = pre.next;

            carry = sum / 10;

            // pre.next = tail;
            // pre = tail;
            l1 = l1.next;
            l2 = l2.next;
        }

        ListNode rem = l1 == null ? l2 : l1;
        while(rem != null){
            // ListNode tail = new ListNode(); // 每次都要新建节点，防止修改现有节点
            sum = rem.val + carry;
            pre.next = new ListNode(sum % 10);
            carry = sum / 10;
            
            pre = pre.next;
            rem = rem.next;
        }

        if(carry == 1){
            // ListNode tail = new ListNode();
            // tail.val = 1;
            // tail.next = null;
            // pre.next = tail;
            // pre = tail;
            // 可以直接用下面一句新建节点
            pre.next = new ListNode(carry);
        }

        return head;
    }

    public ListNode addTwoNumbers_zcy(ListNode l1, ListNode l2) {
        if (l1 == null || l2 == null) {
            return l1 == null ? l2 : l1;
        }

        int carry = 0;
        ListNode head = null;
        ListNode pre = head;
        for (int sum, val; 
             l1 != null || l2 != null; // 终止条件，两个都为空
             l1 = l1 != null ? l1.next : null, 
             l2 = l2 != null ? l2.next : null) {

            sum = (l1 == null ? 0 : l1.val) +
                    (l2 == null ? 0 : l2.val) +
                    carry;

            val = sum % 10;
            carry = sum / 10;

            if (head == null) {
                head = new ListNode(val);
                pre = head;
            } else {
                pre.next = new ListNode(val);
                pre = pre.next;
            }
        }

        if (carry == 1) {
            pre.next = new ListNode(1);
        }
        return head;
    }
}
