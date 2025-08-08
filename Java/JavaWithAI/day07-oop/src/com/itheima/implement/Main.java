package com.itheima.implement;

public class Main {
    public static void main(String[] args) {
        Student[] students=new Student[10];
        // 编造十条学生信息
        students[0]=new Student("张三","男",95);
        students[1]=new Student("李四","女",98);
        students[2]=new Student("王五","男",99);
        students[3]=new Student("赵六","女",100);
        students[4]=new Student("钱七","男",101);
        students[5]=new Student("孙八","女",102);
        students[6]=new Student("李九","男",103);
        students[7]=new Student("王十","女",104);
        students[8]=new Student("赵十","男",105);
        students[9]=new Student("孙十","女",106);

        ClassDataInter cdi=new ClassDataInterImpl1(students);
        System.out.println("=============接口1==================");
        cdi.printAllInfo();
        cdi.printAverageScore();

        ClassDataInter cdi2=new ClassDataInterImpl2(students);
        System.out.println("=============接口2==================");
        cdi2.printAllInfo();
        cdi2.printAverageScore();
    }
}
