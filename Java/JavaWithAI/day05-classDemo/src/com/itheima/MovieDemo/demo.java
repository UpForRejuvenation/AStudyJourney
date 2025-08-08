package com.itheima.MovieDemo;

public class demo {
    public static void main(String[] args) {
        int len=10;
        Movie[] movies=new Movie[len];

        MovieOperator mo=new MovieOperator(movies,len);

        mo.inputMovies(movies,1,"星际穿越",9.5);
        mo.inputMovies(movies,2,"宝宝巴士",9.0);
        mo.inputMovies(movies,3,"哪吒2",9.5);
        mo.inputMovies(movies,4,"大圣归来",9.0);
        mo.inputMovies(movies,5,"战狼2",9.5);

        mo.printMovies();
        System.out.println();
        mo.searchMovies(2);
    }
}
