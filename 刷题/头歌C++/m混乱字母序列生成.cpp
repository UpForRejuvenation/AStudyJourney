#include<stdio.h>
#include<string.h>

#define SIZE 101

int isSame(char str1, char str2);

int main(){
	
	int n;
	scanf("%d",&n);
	
	char str[SIZE][2];
	char res[SIZE];
	int sign[SIZE];
	for(int i=0;i<n;i++){
		scanf("%s",str[i]);
		sign[i]=1;
	}
	
	res[0]=str[0][0],res[1]=str[0][1];
	int reshead=0;
	int restail=1;
	int i=1;
	int cnt=1;
	while(cnt<n){
		if(isSame(res[restail],str[i][0])&&sign[i]){
			res[++restail]=str[i][1];
			sign[i]=0;
			cnt++;
		}
		else if(isSame(res[restail],str[i][1])&&sign[i]){
			res[++restail]=str[i][0];
			sign[i]=0;
			cnt++;
		}
		else if(isSame(res[reshead],str[i][1])&&sign[i]){
			int reslen=strlen(res);
			for(int j=reslen;j>0;j--){
				res[j]=res[j-1];
			}
			res[0]=str[i][0];
			sign[i]=0;
			cnt++;
		}
		else if(isSame(res[reshead],str[i][0])&&sign[i]){
			int reslen=strlen(res);
			for(int j=reslen;j>0;j--){
				res[j]=res[j-1];
			}
			res[0]=str[i][1];
			sign[i]=0;
			cnt++;
		}
		
		i=(i+1)%n;
	}
	
	printf("%s",res);
	return 0;
}

int isSame(char str1, char str2){
	if(str1==str2||str1+32==str2||str1-32==str2){
		return 1;
	}
	else{
		return 0;
	}
}
