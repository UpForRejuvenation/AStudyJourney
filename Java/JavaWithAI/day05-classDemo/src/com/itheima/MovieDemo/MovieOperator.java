package com.itheima.MovieDemo;

public class MovieOperator {
    private Movie[] movies;
    private int count=0;
    private int length=0;

    public MovieOperator(){
    }

    public MovieOperator(Movie[] movies,int len){
        this.movies=movies;
        this.length=len;
        for (int i = 0; i < len;i++) {
            this.movies[i]=new Movie();
        }
    }

    public void inputMovies(Movie[] movies,int id,String name,double price){
        if(this.count + 1 <= length){
            this.movies[count].setId(id);
            this.movies[count].setName(name);
            this.movies[count].setPrice(price);
            this.count++;
        }
        else{
            System.out.println("电影库已满，无法添加");
        }
    }

    public void printMovies(){
        System.out.println("===============电影列表===============");
        for(int i=0;i<this.count;i++){
            System.out.println(this.movies[i].getId()+"\t"+this.movies[i].getName()+"\t"+this.movies[i].getPrice());
        }
    }

    public void searchMovies(int id){
        for(int i=0;i<this.count;i++){
            if(this.movies[i].getId()==id){
                System.out.println(this.movies[i].getId()+"\t"+this.movies[i].getName()+"\t"+this.movies[i].getPrice());
                return;
            }
        }
    }
}
