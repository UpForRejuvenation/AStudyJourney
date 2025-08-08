package com.itheima.polymorphism;

public class Demo {
    public static void main(String[] args) {
        Animal w1=new Wolf();
        Animal s1=new Sheep();

        w1.run();
        s1.run();

        testRun(w1);
        testRun(s1);

        Wolf w2=(Wolf)w1;
        Sheep s2=(Sheep)s1;

        w2.eatSheep();
        s2.eatWeed();
    }

    public static void testRun(Animal a){
        a.run();
    }
}

