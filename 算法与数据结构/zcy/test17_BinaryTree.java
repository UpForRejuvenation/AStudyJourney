public class test17_BinaryTree {
    /*
     * 写了两种方法
     * 1. 在类内部定义静态方法
     */
    public static void main(String[] args) {
        BinaryTree head = new BinaryTree(1);
        head.left = new BinaryTree(2);
        head.right = new BinaryTree(3);
        head.left.left = new BinaryTree(4);
        head.left.right = new BinaryTree(5);
        head.right.left = new BinaryTree(6);
        head.right.right = new BinaryTree(7);

        System.out.println("先序遍历：");
        head.preOrder(head);
        System.out.println();
        System.out.println("中序遍历：");
        head.inOrder(head);
        System.out.println();
        System.out.println("后序遍历：");
        head.posOrder(head);
        System.out.println();
        
        // 非静态方法，类的内部实例调用，可以正常运行，但提醒不用判断this==null
        System.out.println("先序遍历：");
        head.preOrder();
        System.out.println();

        /*
         * 显示一致，说明不需要判断head是否==null，原理不明
         */
        BinaryTree head2 = new BinaryTree();
        System.out.println("没有初始化的二叉树用静态方法先序遍历：");
        head2.preOrder();
        System.out.println();
        System.out.println("没有初始化的二叉树用实例方法先序遍历：");
        System.out.println();

        /*
         * 这里可以看出
         *      静态方法：可以通过类名直接调用，且用对象名调用没有报错
         *      实例方法：需要声明对象，用对象调用
         */
        // BinaryTree.show();
        // head.show();
    }
}

class BinaryTree{
    BinaryTree left;
    int value;
    BinaryTree right;

    public BinaryTree(){};

    public BinaryTree(int num){
        this.value = num;
    }

    // 先序遍历
    public void preOrder(BinaryTree head){
        if(head == null){
            return;
        }
        System.out.print(head.value + " ");
        preOrder(head.left);
        preOrder(head.right);
    }

    public void preOrder() {
        System.out.print(this.value + " ");
        preOrder(this.left);
        preOrder(this.right);
    }
    // 中序遍历
    public void inOrder(BinaryTree head){
        if(head == null){
            return;
        }
        inOrder(head.left);
        System.out.print(head.value+" ");
        inOrder(head.right);
    }

    // 后序遍历
    public void posOrder(BinaryTree head){
        if(head==null){
            return;
        }
        posOrder(head.left);
        posOrder(head.right);
        System.out.print(head.value+" ");
    }

    // 静态方法
    // public static void show(){
    //     System.out.println("这是一个二叉树");
    // }

    public void show(){
        System.out.println("这是一个二叉树");
    }
}
