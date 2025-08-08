public class Q622 {
    public static class MyCircularQueue {
        int[] cqueue;
        int l, r, size, limit;

        public MyCircularQueue(int n) {
            cqueue = new int[n];
            l = r = size = 0;
            limit = n;
        }

        public boolean isEmpty() {
            return size == 0;
        }

        public boolean isFull() {
            return size == limit;
        }

        public int size() {
            return size;
        }

        // 入队
        public boolean enQueue(int num) {
            if (isFull()) {
                return false;
            } else {
                cqueue[r] = num;
                r = r == limit - 1 ? 0 : (r + 1);
                size++;
                return true;
            }
        }

        // 出队
        public boolean deQueue() {
            if (isEmpty()) {
                return false;
            } else {
                l = l == limit - 1 ? 0 : (l + 1);
                size--;
                return true;
            }
        }

        // 获得队头元素，不弹出
        public int Front() {
            if (isEmpty()) {
                return -1;
            } else {
                return cqueue[l];
            }
        }

        /*
         * 获得队尾元素
         * 但由于r不直接指向value
         * 需要分别考虑r=0和!=0的情况
         */
        public int Rear() {
            if (isEmpty()) {
                return -1;
            } else {
                int index = r == 0 ? (limit - 1) : (r - 1);
                return cqueue[index];
            }
        }
    }
}
