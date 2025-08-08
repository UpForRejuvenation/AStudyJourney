import java.util.Stack;

public class Q155 {
    class MinStack {
        Stack<Integer> stack;
        Stack<Integer> min;

        public MinStack() {
            stack = new Stack<>();
            min = new Stack<>();
        }

        public void push(int num) {
            stack.push(num);
            if (min.empty() || num <= min.peek()) {
                min.push(num);
            } else {
                min.push(min.peek());
            }
        }

        public void pop() {
            stack.pop();
            min.pop();
        }

        public int top() {
            return stack.peek();
        }

        public int getMin() {
            return min.peek();
        }
    }
}
