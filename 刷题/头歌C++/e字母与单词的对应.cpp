#include<stdio.h>

int main(){
	
	char c1,c2;
	scanf("%c",&c1);
	if(c1=='s'||c1=='S'){
		getchar();
		scanf("%c",&c2);
		if(c2=='a'||c2=='A'){
			printf("saturday");
		}
		else{
			printf("sunday");
		}
	}
	else if(c1=='t'||c1=='T'){
		getchar();
		scanf("%c",&c2);
		if(c2=='u'||c2=='U'){
			printf("tuesday");
		}
		else{
			printf("thursday");
		}
	}
	else{
		switch(c1){
			case 'm':
			case 'M':
				printf("monday");
				break;
			case 'w':
			case 'W':
				printf("wednesday");
				break;
			case 'f':
			case 'F':
				printf("friday");
				break;
		}
	}
	return 0;
} 
