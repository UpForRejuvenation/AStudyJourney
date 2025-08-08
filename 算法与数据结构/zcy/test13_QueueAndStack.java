import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class test13_QueueAndStack{
    /*
     * 通过java自有的Queue类声明队列
     */
    public static class Queue1{
        public Queue<Integer> queue = new LinkedList<>();

        public boolean isEmpty(){
            return queue.isEmpty();
        }

        public int size(){
            return queue.size();
        }

        // 返回且弹出
        public int poll(){
            return queue.poll();
        }

        // 插入队尾
        public void offer(int num){
            queue.offer(num);
        }

        // 返回队头元素但是不弹出
        public int peek(){
            return queue.peek();
        }
    }

    /*
     * 通过数组创建队列
     */
    public class Queue2{

        int[] queue;
        int l,r;

        // 构造器
        public Queue2(int n){
            queue = new int[n];
            l = 0;
            r = 0;
        }

        public int size(){
            return r-l;
        }

        public boolean isEmpty(){
            return l==r;
        }

        // 返回栈底
        public int peak(){
            return queue[l];
        }

        // 插入
        public void offer(int num){
            queue[r++] = num;
        }

        // 不弹出返回
        public int tail(){
            return queue[r-1];
        }

        // 弹出返回
        public int poll(){
            return queue[--r];
        }
    }

    /*
     * 通过java自有的stack声明栈
     */
    public class Stack1{
        Stack<Integer> stack = new Stack<>();

        public boolean isEmpty(){
            return stack.isEmpty();
        }

        public int size(){
            return stack.size();
        }

        public void push(int num){
            stack.push(num);
        }

        public int pop(){
            return stack.pop();
        }

        public int peek(){
            return stack.peek();
        }
    }

    /*
     * 通过数组创建栈
     */
    public class Stack2{
        int[] stack2;
        int size;

        public Stack2(int n){
            stack2 = new int[size];
            size = 0;
        }

        public boolean isEmpty(){
            return size == 0;
        }

        public int size(){
            return size;
        }

        public void push(int num){
            stack2[size++]=num;
        }

        public int pop(){
            return stack2[--size];
        }

        public int peek(){
            return stack2[size-1];
        }
    }

    /*
     * 用数组设计循环队列
     */
    public class CirQueue{
        int[] cqueue;
        int l,r,size,limit;

        public CirQueue(int n){
            cqueue = new int[n];
            l=r=size=0;
            limit = n;
        }

        public boolean isEmpty(){
            return size == 0;
        }

        public boolean isFull(){
            return size == limit;
        }
        public int size(){
            return size;
        }

        // 入队
        public boolean offer(int num){
            if(isFull()){
                return false;
            } else {
                cqueue[r] = num;
                r = r==limit-1 ? 0:(r+1);
                size++;
                return true;
            }
        }

        // 出队
        public boolean poll(){
            if(isEmpty()){
                return false;
            } else {
                l = l==limit-1? 0:(l+1);
                size --;
                return true;
            }
        }

        // 获得队头元素，不弹出
        public int Front(){
            if(isEmpty()){
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
        public int Rear(){
            if(isEmpty()){
                return -1;
            } else {
                int index = r==0? (limit-1):(r-1);
                return cqueue[index];
            }
        }
    }
}