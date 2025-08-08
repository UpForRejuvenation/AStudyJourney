package com.itheima.demo;

public class SilverCard extends Card{

    public SilverCard(String CarId, String name, String PhoneNumber, double money) {
        super(CarId, name, PhoneNumber, money);
    }
    @Override
    public void consume(double money) {
        if(money<=0){
            System.out.println("消费金额必须大于0");
            return;
        }
        if(money*0.9>getMoney()){
            System.out.println("余额不足");
            return;
        }
        System.out.println("您的消费为："+money);
        System.out.println("优惠后的消费为："+(money*0.8));
        setMoney(getMoney()-money*0.9);
        System.out.println("消费成功，卡内余额为："+getMoney());

    }

}
