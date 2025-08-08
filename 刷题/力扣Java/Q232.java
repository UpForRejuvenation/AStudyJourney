import java.util.Stack;

public class Q232 {
        /*
     * 第一次测试没有通过
     * 1. 判断栈空的方法是 empty()，本质是调用父类Vector的size()方法查看是否 size() == 0
     * 2. isEmpty()是Vector的方法，Stack类继承自Vector
     * 
     * e. 不通过是因为第一次把empty设置成了isEmpty，但栈需要一个empty方法
     */
    class MyQueue{
        Stack<Integer> in;
        Stack<Integer> out;

        public MyQueue(){
            in = new Stack<>();
            out = new Stack<>();
        }

        private void InToOut(){
            if(out.empty()){
                while(!in.empty()){
                    out.push(in.pop());
                }
            }
        }

        public void push(int num){
            in.push(num);
            InToOut();
        }

        public int pop(){
            InToOut();
            return out.pop();
        }

        
        public boolean empty(){
            return in.isEmpty() && out.isEmpty();
            // return in.empty() && out.empty();// 这种方式也可以通过lc
        }

        public int size(){
            return in.size()+out.size();
        }

        public int peek(){
            InToOut();
            return out.peek();
        }
    }
}
