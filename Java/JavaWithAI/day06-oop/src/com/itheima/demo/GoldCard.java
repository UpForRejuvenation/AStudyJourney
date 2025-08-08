package com.itheima.demo;

public class GoldCard extends Card{

    public GoldCard(String CarId, String name, String PhoneNumber, double money) {
        super(CarId, name, PhoneNumber, money);
    }

    @Override
    public void consume(double money) {
        if(money<=0){
            System.out.println("消费金额必须大于0");
            return;
        }
        if(money*0.8>getMoney()){
            System.out.println("余额不足");
            return;
        }
        System.out.println("您的消费为："+money);
        System.out.println("优惠后的消费为："+(money*0.8));
        setMoney(getMoney()-money*0.8);
        System.out.println("消费成功，卡内余额为："+getMoney());

        if(money*0.8>=200){
            printSticket();
        }
        else{
            System.out.println("消费不满200元，不赠送洗车票");
        }
    }

    public void printSticket(){
        System.out.println("消费满200元，赠洗车票一张");
    }
}
