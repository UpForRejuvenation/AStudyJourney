#include <stdio.h>
#include <string.h>
void fun(char *a)
{
//************** code begin **************//
	int len=strlen(a);
	int prestar=0;
	
	while(a[prestar]=='*'){
		prestar++;
	}
	
	for(int i=prestar;i<len;i++){
		a[i-prestar]=a[i];
	}

	for(int i=len-prestar;i<len;i++){
		a[i]='*';
	}

//************** code end ****************//
}
int main()
{	
	char s[81];
	gets(s);
	fun(s);
	puts(s);
	
	return 0;
}



