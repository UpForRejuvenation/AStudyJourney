package com.itheima.game;

import java.util.*;

public class Room {
    List<Card> cards = new ArrayList<>();
    {
        // 初始化
        String[] size = {"3","4","5","6","7","8","9","10","J","Q","K","A","2"};
        String[] color = {"♠","♥","♣","♦"};
        int num =0;
        for(String s : size){
            num++;
            for (String c : color){
                cards.add(new Card(s,c,num));
            }
        }
        // 第一种加法
//        cards.add(new Card("","🃏"));
//        cards.add(new Card("","👲"));
        // 第二种加法
        Collections.addAll(cards, new Card("","🃏",++num), new Card("","👲",++num));
        System.out.println(cards);
    }


    public void start(){
        // 打乱
        Collections.shuffle(cards);
        System.out.println(cards);

        // 发牌
        Map<String, List<Card>> player = new HashMap<>();

        List<Card> one = new ArrayList<>();
        List<Card> two = new ArrayList<>();
        List<Card> three = new ArrayList<>();
        player.put("王一", one);
        player.put("王二", two);
        player.put("王三", three);

        // 发牌
        for(int i=0;i<51;i++){
            if(i%3==0){
                one.add(cards.get(i));
            } else if (i % 3 == 1){
                two.add(cards.get(i));
            } else {
                three.add(cards.get(i));
            }
        }

        List<Card> end = cards.subList(cards.size()-3,cards.size());

        // 对牌排序
        sort(one);
        sort(two);
        sort(three);
        // 看牌
        for (Map.Entry<String, List<Card>> entry : player.entrySet()){
            String name = entry.getKey();
            List<Card> cards = entry.getValue();
            System.out.println(name + ":" + cards);
        }
        System.out.println("底牌:"+end);
    }

    public void sort(List<Card> cards){
//        Collections.sort(cards, new Comparator<Card>(){
//            @Override
//            public int compare(Card o1, Card o2) {
//                return o2.getNum() - o1.getNum();
//            }
//        });

        // 把上面的算法简化成一行
        Collections.sort(cards, (o1, o2) -> o2.getNum() - o1.getNum());
    }
}
