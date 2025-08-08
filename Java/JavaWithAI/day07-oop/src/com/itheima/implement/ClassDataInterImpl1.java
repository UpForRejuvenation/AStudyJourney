package com.itheima.implement;

public class ClassDataInterImpl1 implements ClassDataInter {
    private Student[] students;

    // 调用了有参构造
    public ClassDataInterImpl1(Student[] students) {
        this.students=students;
    }

    @Override
    public void printAllInfo() {
        System.out.println("学生信息如下：");
        System.out.println("姓名\t性别\t分数");
        for (int i = 0; i < students.length; i++) {
            System.out.println(students[i].getName()+"\t"+students[i].getSex()+"\t"+students[i].getScore());
        }
    }

    @Override
    public void printAverageScore() {
        double sum=0;
        for (int i = 0; i < students.length; i++) {
            Student s=students[i];
            sum+=s.getScore();
        }
        System.out.println("平均分是："+sum/students.length);
    }
}
