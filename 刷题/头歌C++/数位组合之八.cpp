#include <stdio.h>
void fun(int a,int b,long *c)
{
	int n1=b%10;
	int n2=a/10;
	int n3=b/10;
	int n4=a%10;
	*c=n1+n2*10+n3*100+n4*1000;
}
int main()
{	int a,b;
	long c;
	scanf("%d%d",&a,&b);
	fun(a,b,&c);
	printf("%ld\n",c);
	return 0;
}

