package com.itheima.Demo3genericity;

// 泛型类接口
public interface Data<T> {
    void add(T t);
    void delete(T t);
    void update(T t);
    T query(int id);
}
