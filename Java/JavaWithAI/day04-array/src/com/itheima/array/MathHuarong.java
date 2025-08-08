package com.itheima.array;

public class MathHuarong {
    public static void main(String[] args) {
        start(5);
    }

    public static void start(int n){
        int[][] huarong=new int[n][n];
        int count=1;
        for(int i = 0;i < n; i++){
            for (int j = 0; j < n; j++) {
                huarong[i][j]=count++;
            }
        }

        print(huarong);

        System.out.println();
        for(int i=0;i<huarong.length;i++){
            for(int j=0;j<huarong[i].length;j++){
                int x=(int)(Math.random()*huarong.length);
                int y=(int)(Math.random()*huarong[i].length);

                int temp=huarong[x][y];
                huarong[x][y]=huarong[i][j];
                huarong[i][j]=temp;
            }
        }

        print(huarong);
    }

    public static void print(int[][] huarong){
        for (int i = 0; i < huarong.length; i++) {
            for(int j = 0; j < huarong[i].length;j++){
                System.out.print(huarong[i][j]+"\t");
            }
            System.out.println();
        }
    }
}
