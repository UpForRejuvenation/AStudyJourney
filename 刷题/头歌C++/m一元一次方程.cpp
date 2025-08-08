#include<stdio.h>
#include<string.h>

#define SIZE 101
int main(){

	char eqt[SIZE];
	char x;
	double ans=0;
	scanf("%s",&eqt);
	
	int len=strlen(eqt);
	int side=1;
	int sign=1;
	
	double coe=0;
	double cons=0;
	double num=0;
	
	for(int i=0;i<len;i++){
		if(eqt[i]=='+'){
			sign=1;
		}
		else if(eqt[i]=='-'){
			sign=-1;
		}
		else if(eqt[i]=='='){
			side=-1;
		}
		else if(eqt[i]>='a'&&eqt[i]<='z'){
			x=eqt[i];
			coe+=side*sign;
		}
		else{
			num=0;		
			while(i<len&&eqt[i]>='0'&&eqt[i]<='9'){
				num=num*10+(eqt[i]-'0');
				i++;
			}
			
			if(i<len&&eqt[i]<='z'&&eqt[i]>='a'){
				x=eqt[i];
				coe+=side*sign*num;
			}
			else{
				cons+=num*sign*side;
				i--;
			}
		}				
	}
	
	ans=-cons/coe;
	printf("%c=%.3f",x,ans);
	return 0;
}
