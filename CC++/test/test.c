#include<stdio.h>

int sum(int a,int b){
    return a+b;
}
int main(){
    printf("hello world");

    for(int i=0;i<5;i++){
        printf("%d. hello world\n",i);
    }

    int c = sum(10,15);
    printf("%d",c);
}