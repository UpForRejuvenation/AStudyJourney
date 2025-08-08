package com.itheima.demoMovie;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class MovieService {

    private static List<Movie> movies=new ArrayList<Movie>();
    private static Scanner sc=new Scanner(System.in);
    public void start() {
        while (true) {
            System.out.println("==============电影服务系统==============");
            System.out.println("1.添加电影");
            System.out.println("2.删除电影");
            System.out.println("3.查询电影");
            System.out.println("4.删除某明星的电影");
            System.out.println("5.查看所有电影");
            System.out.println("0.退出");
            System.out.println("======================================");
            System.out.println("请选择操作：");
            String command=sc.next();
            switch (command) {
                case "1":
                    addMovie();
                    break;
                case "2":
                    deleteMovie();
                    break;
                case "3":
                    queryMovie();
                    break;
                case "4":
                    deleteByActor();
                    break;
                case "5":
                    showAllMovie();
                    break;
                case "0":
                    System.out.println("正在关闭系统");
                    return;
                default:
                    System.out.println("输入有误！请重新输入！");
                    start();
                    break;
            }
        }

    }

    private void showAllMovie() {
        for(Movie movie : movies){
            System.out.println(movie);
        }
    }

    private void deleteByActor() {
        System.out.println("请输入要删除的演员：");
        String actor = sc.next();
        for(int i=0;i<movies.size();i++){
            if(movies.get(i).getActor().contains(actor)){
                movies.remove(i);
                System.out.println("删除成功！");
            }
        }
    }

    private void deleteMovie() {
        System.out.println("请输入要删除的电影名：");
        String name =sc.next();
        Movie movie =queryByName(name);
        if(movie!=null){
            for(Movie delMovie:movies){
                if(delMovie.getName().equals(name)){
                    movies.remove(delMovie);
                    System.out.println("删除成功！");
                    break;
                }
            }
        }else{
            System.out.println("该电影不存在！");
        }
    }

    private void queryMovie() {
        System.out.println("请输入电影名：");
        String name = sc.next();
        Movie movie = queryByName(name);
        if (movie != null) {
            System.out.println(movie);
        } else {
            System.out.println("没有此电影！");
        }

    }

    public Movie queryByName(String name) {
        for (Movie movie : movies) {
            if (movie.getName().equals(name)) {
                return movie;
            }
        }
        return null;
    }

    private void addMovie() {
        Movie movie=new Movie();
        System.out.println("请输入电影名称：");
        movie.setName(sc.next());
        System.out.println("请输入电影评分：");
        movie.setScore(sc.nextDouble());
        System.out.println("请输入电影演员：");
        movie.setActor(sc.next());
        System.out.println("请输入电影价格：");
        movie.setPrice(sc.nextDouble());

        movies.add(movie);
        System.out.println("添加成功！");
    }
}
