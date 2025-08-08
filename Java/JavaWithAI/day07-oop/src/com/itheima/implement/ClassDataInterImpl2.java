package com.itheima.implement;

public class ClassDataInterImpl2 implements ClassDataInter {
    private Student[] students;

    public ClassDataInterImpl2() {}

    public ClassDataInterImpl2(Student[] students) {
        this.students = students;
    }
    @Override
    public void printAllInfo() {
        int maleCount=0;
        int femaleCount=0;
        System.out.println("学生信息如下：");
        System.out.println("姓名\t性别\t分数");
        for (int i = 0; i < students.length; i++) {
            System.out.println(students[i].getName()+"\t"+students[i].getSex()+"\t"+students[i].getScore());
            if (students[i].getSex().equals("男")) {
                maleCount++;
            } else if(students[i].getSex().equals("女")){
                femaleCount++;
            }
        }
        System.out.println("男学生人数："+maleCount);
        System.out.println("女学生人数："+femaleCount);
    }

    @Override
    public void printAverageScore() {
        double sum=0;
        double max=students[0].getScore();
        double min=students[0].getScore();
        for (int i = 0; i < students.length; i++) {
            Student s=students[i];
            sum+=s.getScore();
            if (s.getScore()>max) {
                max=s.getScore();
            }
            if (s.getScore()<min) {
                min=s.getScore();
            }
        }
        System.out.println("平均分是："+(sum-max-min)/(students.length-2));
    }
}
