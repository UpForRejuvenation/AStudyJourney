package com.itheima;

import javax.swing.*;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.awt.image.DataBufferDouble;
import java.io.*;

public class MainFrame extends JFrame {
    // 存储图片路径
    private static final String imagePath="stone-maze/src/image/";
    // 存储图片默认顺序的数组
    private int[][] imageData={
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12},
            {13,14,15,0}
    };

    private int[][] winData={
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12},
            {13,14,15,0}
    };
    // 定义两个变量存储空白色块的坐标
    private int whiteX;
    private int whiteY;

    // 定义一个变量统计步数
    private int step=0;
    // 定义一个历史最少步数
    private int minStep;
    // 初始化窗体
    public MainFrame(){
        minStep = readScore();
        initFrame();
        initMenu();
        // 打乱数字色块的顺序
        initRandomImage();
        initImage();
        initPressKeyListener();

        this.setVisible(true);
    }

    private void initPressKeyListener() {
        this.addKeyListener(new KeyAdapter() {
            @Override
            public void keyPressed(KeyEvent e) {
                int keyCode = e.getKeyCode();
                switch (keyCode) {
                    case KeyEvent.VK_UP:
                        switchAndMove(Direction.UP);
                        break;
                    case KeyEvent.VK_DOWN:
                        switchAndMove(Direction.DOWN);
                        break;
                    case KeyEvent.VK_LEFT:
                        switchAndMove(Direction.LEFT);
                        break;
                    case KeyEvent.VK_RIGHT:
                        switchAndMove(Direction.RIGHT);
                        break;
                    default:
                        // 默认情况，可以留空或添加其他逻辑
                        break;
                }
            }
        });
        initImage();
    }

    private void switchAndMove(Direction r){
        switch (r){
            case UP:
                if(whiteX>0){
                    // 交换空白色块和上面色块的位置
                    imageData[whiteX][whiteY]=imageData[whiteX-1][whiteY];
                    imageData[whiteX-1][whiteY]=0;
                    whiteX--;
                    step++;
                }
                break;
            case DOWN:
                if(whiteX<imageData.length-1){
                    // 交换空白色块和上面色块的位置
                    imageData[whiteX][whiteY]=imageData[whiteX+1][whiteY];
                    imageData[whiteX+1][whiteY]=0;
                    whiteX++;
                    step++;
                }
                break;
            case LEFT:
                if(whiteY>0){
                    // 交换空白色块和左边色块的位置
                    imageData[whiteX][whiteY]=imageData[whiteX][whiteY-1];
                    imageData[whiteX][whiteY-1]=0;
                    whiteY--;
                    step++;
                }
                break;
            case RIGHT:
                if(whiteY<imageData.length-1){
                    // 交换空白色块和左边色块的位置
                    imageData[whiteX][whiteY]=imageData[whiteX][whiteY+1];
                    imageData[whiteX][whiteY+1]=0;
                    whiteY++;
                    step++;
                }
                break;
            default:
                break;
        }

        initImage();
    }

    private void initRandomImage() {
        for(int i = 0; i < imageData.length; i++){
            for (int j = 0; j < imageData[i].length; j++){
                int i1=(int)(Math.random()*imageData.length);
                int j1=(int)(Math.random()*imageData.length);

                int i2=(int)(Math.random()*imageData.length);
                int j2=(int)(Math.random()*imageData.length);

                int temp=imageData[i1][j1];
                imageData[i1][j1]=imageData[i2][j2];
                imageData[i2][j2]=temp;
            }
        }

        OUT:
        for (int i = 0; i < imageData.length; i++) {
            for (int j = 0; j < imageData.length; j++) {
                if (imageData[i][j] == 0) {
                    whiteX = i;
                    whiteY = j;
                    break OUT;
                }
            }
        }
    }

    private void initMenu() {
        JMenuBar menuBar=new JMenuBar();
        JMenu menu=new JMenu("系统");

        JMenuItem exitJi=new JMenuItem("退出");
        menu.add(exitJi);
        exitJi.addActionListener(e->{
            dispose();
        });

        JMenuItem restartJi=new JMenuItem("重新开始");
        menu.add(restartJi);
        restartJi.addActionListener(e->{
            step=0;
            initRandomImage();
            initImage();
        });
        menuBar.add(menu);

        this.setJMenuBar(menuBar);
    }

    private void initImage() {
        // 移除所有图层
        this.getContentPane().removeAll();

        JLabel stepTxt=new JLabel("步数："+step);
        stepTxt.setBounds(10,10,100,20);
        this.add(stepTxt);

        if(minStep != 0){
            JLabel stepTxt2=new JLabel("历史步数："+minStep);
            stepTxt2.setBounds(300,10,100,20);
            this.add(stepTxt2);
        }


        // 判断是否胜利
        if(isWin()){
            // 展示胜利的图片
            JLabel label=new JLabel(new ImageIcon(imagePath+"win.png"));
            label.setBounds(124,230,266,88);
            this.add(label);

            int fileCount = readScore();
            if(fileCount == 0 || step < fileCount){
                writeScore(minStep);
            }
        }

        // 创建图片
        for (int i = 0; i < imageData.length; i++) {
            for (int j = 0; j < imageData[i].length; j++) {
                String imageName=imageData[i][j]+".png";
                JLabel label = new JLabel();
                label.setIcon(new ImageIcon(imagePath+imageName));
                label.setBounds(20+j*100,80+i*100,100,100);
                this.add(label);
            }
        }

        // 先生成的在上面，后生成的背景图片在下面
        JLabel background=new JLabel(new ImageIcon(imagePath+"background.png"));
        background.setBounds(0,20,450,484);
        this.add(background);

        // 刷新图层，重新绘制
        this.repaint();
    }

    // 写一个方法，把minStep写入score.txt文件中
    private void writeScore(int count){
        try(
                FileWriter fw = new FileWriter("stone-maze/src/score.txt");
                BufferedWriter bw = new BufferedWriter(fw);
                ){
            bw.write(count+"");
        } catch (Exception e){
            e.printStackTrace();
        }
    }
    // 写一个方法，读取score.txt文件中的最小步数
    private int readScore(){
        try(
                FileReader fr = new FileReader("stone-maze/src/score.txt");
                BufferedReader br = new BufferedReader(fr);
                ){
            String line = br.readLine();
            return Integer.parseInt(line);
        } catch (Exception e){
            e.printStackTrace();
            return 0;
        }
    }
    private boolean isWin() {
        for (int i = 0; i < imageData.length; i++) {
            for (int j = 0; j < imageData[i].length; j++) {
                if(imageData[i][j]!=winData[i][j]){
                    return false;
                }
            }
        }
        return true;
    }

    private void initFrame() {
        this.setTitle("石子迷宫 V1.0");
        this.setSize(465, 575);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLocationRelativeTo(null);
        this.setLayout(null);
    }
}
