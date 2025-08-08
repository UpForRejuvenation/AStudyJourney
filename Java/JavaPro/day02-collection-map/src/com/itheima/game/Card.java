package com.itheima.game;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

import java.util.Comparator;

@Data
@NoArgsConstructor
@AllArgsConstructor

public class Card{
    private String size;
    private String color;
    private int num;

    @Override
    public String toString(){
        return size+color;
    }
}
