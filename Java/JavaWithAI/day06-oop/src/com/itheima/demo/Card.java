package com.itheima.demo;

public class Card {
    String CarID;
    String OwnrName;
    String PhoneNumber;
    double Money;

    public Card() {}

    public Card(String CarID, String OwnrName, String PhoneNumber, double Money) {
        this.CarID = CarID;
        this.OwnrName = OwnrName;
        this.PhoneNumber = PhoneNumber;
        this.Money = Money;
    }

    public String getCarID() {
        return CarID;
    }

    public void setCarID(String carID) {
        CarID = carID;
    }

    public String getOwnrName() {
        return OwnrName;
    }

    public void setOwnrName(String ownrName) {
        OwnrName = ownrName;
    }

    public String getPhoneNumber() {
        return PhoneNumber;
    }

    public void setPhoneNumber(String phoneNumber) {
        PhoneNumber = phoneNumber;
    }

    public double getMoney() {
        return Money;
    }

    public void setMoney(double money) {
        Money = money;
    }



    public void deposit(double money) {
        this.Money += money;
    }

    public void consume(double money) {
        this.Money -= money;
    }
}
