#include <stdio.h>
#include <string.h>
void fun( char *a,char *h,char *p)
{
//************** code begin **************//
    a=h;
    for(char *i=h;i<=p;i++){
        if(*i!='*'){
            *a=*i;
            a++;
        }
    }
    while(*p++){
        *a++=*p;
    }
		


//************** code end ****************//
}
int main()
{ 
	char s[81],*t,*f;
	fgets(s,81,stdin);
	t=f=s;
	while(*t!='\n')  
		t++;
	t=t-2;
	while(*t=='*')
		t--;
	while(*f=='*') 
		f++;
	fun(s,f,t);
	puts(s);
	return 0;
}
