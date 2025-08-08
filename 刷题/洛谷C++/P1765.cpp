#include<stdio.h>
#include<string.h>

int main(){
	
	char s[1000];
	fgets(s,1000,stdin);
	
	int cnt=0;
	
	for(int i=0;i<strlen(s);i++){
		switch(s[i]){
			case ' ':
				cnt++;
				break;
			case 'a':
			case 'd':
			case 'g':
			case 'j':
			case 'm':
			case 'p':
			case 't':
			case 'w':
				cnt++;
				break;
			case 'b':
			case 'e':
			case 'h':
			case 'k':
			case 'n':
			case 'q':
			case 'u':
			case 'x':
				cnt+=2;
				break;
			case 'c':
			case 'f':
			case 'i':
			case 'l':
			case 'o':
			case 'r':
			case 'v':
			case 'y':
				cnt+=3;
				break;
			default:
				cnt+=4;
				break;
		}
	}
	
	printf("%d",cnt-4);
	return 0;
}
