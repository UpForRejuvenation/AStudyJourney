#include <stdio.h>
#include <ctype.h>
#include<math.h>
//------------------------------------------------     
//   ע�⣺���� Begin-End ���䲹���������롣
//------------------------------------------------
void strToInt(char *ch){
	int sum=0,flag1=0,flag2=0;//flag1��ʶ����,flag2��ʶ��һ��ʮ�������ַ�  
	// ���ڴ������Ĵ���
    //********** Begin ********    
	scanf("%s",ch);
	
	char str[1024],len=0;
	for(int i=0;ch[i]!='#';i++){
		if((ch[i]>='0'&&ch[i]<='9')||(ch[i]>='A'&&ch[i]<='F')||(ch[i]>='a'&&ch[i]<='f')){
			if(!flag2){
				flag2=i;
			}
			str[len++]=ch[i];
		}
	}
	
	for(int i=flag2-1;i>=0;i--){
		if(ch[i]=='+'){
			flag1=1;
			break;
		}
		else if(ch[i]=='-'){
			flag1=-1;
			break;
		}
	}
	
	for(int i=0;i<len;i++){
		if(str[i]>='0'&&str[i]<='9'){
			sum+=(str[i]-'0')*pow(16,len-i-1);
		}
		else if(str[i]>='a'&&str[i]<='f'){
			sum+=(str[i]-'a'+10)*pow(16,len-i-1);
		}
		else if(str[i]>='A'&&str[i]<='A'){
			sum+=(str[i]-'A'+10)*pow(16,len-i-1);
		}
	}
	
	sum*=flag1;
	printf("%d",sum);
	//********** End **********                                                    
}
int main()
{
	char ch[1024];
	strToInt(ch);
	return 0;
} 
