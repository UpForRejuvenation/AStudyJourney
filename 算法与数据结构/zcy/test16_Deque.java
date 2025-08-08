import java.util.Deque;
import java.util.LinkedList;

public class test16_Deque {
    /*
     * 用java自带的双向链表likedlist实现
     */
    class MyCircularDeque1 {

        Deque<Integer> deque = new LinkedList();
        int size = 0;
        int limit = 0;

        public MyCircularDeque1(int k) {
            limit = k;
        }

        public boolean insertFront(int value) {
            if(isFull()){
                return false;
            } else {
                deque.offerFirst(value);
                size++;
                return true;
            }
        }

        public boolean insertLast(int value) {
            if(isFull()){
                return false;
            } else{
                deque.offerLast(value);
                size++;
                return true;
            }
        }

        public boolean deleteFront() {
            if(isEmpty()){
                return false;
            } else {
                deque.pollFirst();
                size--;
                return true;
            }
        }

        public boolean deleteLast() {
            if(isEmpty()){
                return false;
            } else {
                deque.pollLast();
                size--;
                return true;
            }
        }

        public int getFront() {
            if(isEmpty()){
                return -1;
            } else {
                return deque.peekFirst();
            }
        }

        public int getRear() {
            if(isEmpty()){
                return -1;
            } else {
                return deque.peekLast();
            }
        }

        public boolean isEmpty() {
            return size==0;
        }

        public boolean isFull() {
            return size == limit;
        }
    }

    /*
     * 用数组自己实现
     * 
     * 1. 没有l = r = 0会出错
     */
    class MyCircularDeque {

        int[] deque;
        int l,r,size,limit;
        public MyCircularDeque(int k) {
            deque = new int[k];
            limit = k;
            size = 0;
        }

        public boolean insertFront(int value) {
            if(isFull()){
                return false;
            } else {
                if(isEmpty()){
                    l = r = 0; // 就差这一句
                    deque[l]=value;
                } else {
                    l = l == 0 ? (limit - 1) : (l - 1);
                    deque[l] = value;
                }
                size++;
                return true;
            }
        }

        public boolean insertLast(int value) {
            if(isFull()){
                return false;
            } else {
                if(isEmpty()){
                    l = r = 0;
                    deque[r] = value;
                } else {
                    r = r == limit - 1 ? (0) : (r + 1);
                    deque[r] = value;
                }
                size++;
                return true;
            }
        }

        public boolean deleteFront() {
            if(isEmpty()){
                return false;
            } else {
                l = l==limit-1? 0:(l+1);
                size--;
                return true;
            }
        }

        public boolean deleteLast() {
            if(isEmpty()){
                return false;
            } else {
                r = r == 0? (limit-1):(r-1);
                size--;
                return true;
            }
        }

        public int getFront() {
            if(isEmpty()){
                return -1;
            }
            return deque[l];
        }

        public int getRear() {
            if(isEmpty()){
                return -1;
            }
            return deque[r];
        }

        public boolean isEmpty() {
            return size == 0;
        }

        public boolean isFull() {
            return size == limit;
        }
    }
}
