public class Q86 {
    public ListNode DivideList(ListNode head, int x) {
        ListNode smallHead = null, smallTail = null;
        ListNode bigHead = null, bigTail = null;
        /*
         * 这是另外一种做法，用一个next存储head的下一个节点，
         * 每经过一个节点，将head.next设置为null，防止成环
         */
        ListNode next = null; // 2

        while (head != null) {
            next = head.next; // 2
            if (head.val < x) {
                if (smallHead == null) {
                    smallHead = head;
                } else {
                    smallTail.next = head;
                }
                smallTail = head;
            } else {
                if (bigHead == null) {
                    bigHead = head;
                } else {
                    bigTail.next = head;
                }
                bigTail = head;
            }
            // head = head.next; // 1
            head.next = null; // 2
            head = next; // 2
        }

        if (smallHead == null) {
            return bigHead;
        }

        // if(bigHead != null && smallHead != null){
        // smallTail.next = null;
        // bigTail.next = null;
        // } // 1
        smallTail.next = bigHead;
        return smallHead;
    }
}
