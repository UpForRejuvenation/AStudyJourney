#include<stdio.h>
#include<string.h>

#define SIZE 10001
int main(){
	
	char str[SIZE];
	scanf("%s",&str);
	
	int len=strlen(str);
	int sum=0,temp=0;
	for(int i=0;i<len;i++){
		temp=0;
		while(str[i]>='0'&&str[i]<='9'){
			if(str[i-1]=='"'){
				for(i;i<len;i++){
					if(str[i]=='"'){
						break;
					}
				}
				continue;
			}
			temp=temp*10+(str[i]-'0');
			if(str[i-1]=='-'){
				temp*=-1;
			}
			i++;
		}
		sum+=temp;
	}
	
	printf("%d",sum);
	return 0;
}
