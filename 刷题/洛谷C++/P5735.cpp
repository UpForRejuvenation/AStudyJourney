#include<stdio.h>
#include<math.h>

typedef struct{
	double x;
	double y;
}Point;



void input(Point* pnt);
double dis(Point pnt1,Point pnt2);

int main(){
	Point p1,p2,p3;
	scanf("%lf %lf",&p1.x,&p1.y);
	scanf("%lf %lf",&p2.x,&p2.y);
	scanf("%lf %lf",&p3.x,&p3.y);
	
	double c=dis(p1,p2)+dis(p1,p3)+dis(p2,p3);
	printf("%.2f",c);
	return 0;
} 

double dis(Point pnt1,Point pnt2){
	return sqrt(pow(pnt1.x-pnt2.x,2)+pow(pnt1.y-pnt2.y,2));
}
