import java.util.LinkedList;
import java.util.Queue;

public class Q225 {
        // 类名后不要加()
    /*
     * 1. Queue类extendsCollection
     */
    class MyStack{
        Queue<Integer> queue;

        public MyStack(){
            queue = new LinkedList<Integer>();
        }

        public void push(int num){
            int n = queue.size();
            queue.offer(num);
            for(int i=0;i<n;i++){
                queue.offer(queue.poll());
            }
        }

        public int pop(){
            return queue.poll();
        }

        public int top(){
            return queue.peek();
        }

        public boolean empty(){
            return queue.size() == 0;
        }
    }
}
