//#include<stdio.h>
//#include<stdlib.h>
//
//#define SIZE 10001
//
//int main(){
//	
//	int stoneSize=0,stone[SIZE];
//	scanf("%d",&stoneSize);
//	
//	int max=0,maxi=0,min=0,mini=0;
//	for(int i=0;i<stoneSize;i++){
//		scanf("%d",&stone[i]);
//		if(stone[i]>max){
//			max=stone[i];
//			maxi=i;
//		}
//		if(stone[i]<min){
//			min=stone[i];
//			mini=i;
//		}
//	}
//	
//	if((max>0&&min>0)||(max<0&&min<0)){
//		goto flag;
//	}
//	
//	if(maxi>mini){
//		for(int i=0;i<mini;i++){
//			if(stone[i]>0){
//				stone[i]=0;
//			}
//		}
//	}
//	
//	flag;
//	for(int i=0;i<stoneSize;i++){
//		printf("%d",stone[i]);
//	}
//	return 0;
//}
//int stone[SIZE]={0},stoneSize=0;
//int isValid(int x);
//void hit(int x,int y);
//
//int main(){
//	
//	int remain[SIZE]={0};
//	int remlen=0;
//	scanf("%d",&stoneSize);
//	
//	for(int i=0;i<stoneSize;i++){
//		scanf("%d",&stone[i]);
//	}
//	
//	for(int i=0;i<stoneSize;i++){
//		if(stone[i]<0){
//			if(isValid(i-1)){
//				hit(i-1,i);
//			}
//			if(isValid(i+1)){
//				hit(i,i+1);
//			}
//		}
//		else{
//			
//		}
//	}
//	
//	return 0;
//}
//
//int isValid(int x){
//	if(x<0||x>=stoneSize){
//		return 0;
//	}
//	else{
//		return 1;
//	}
//}
//
//void hit(int x,int y){
//	if((stone[x]<0&&stone[y]<0)||(stone[x]>0&&stone[y]>0)){
//		return;
//	}
//	else if(stone[x]>0&&stone[y]<0){
//		if(stone[x]>stone[y]){
//			remain[y]=0;
//		}
//		else if(stone[x])
//	}
//}

//---------------------------------------------------
//---------------------------------------------------
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int stone[50],i,j,k,n;
//    scanf("%d",&n);
//    
//    for(i=0;i<=n-1;i++)
//    	scanf("%d",&stone[i]);
//    	
//    for(i=0;i<=n-1;i++)
//    {
//        if(stone[i]>=0) 
//			continue;
//        else 
//        {
//            for(j=i-1;j>=0;j--)
//            {
//                if(stone[j]>0)
//                {
//                    if(stone[j]>abs(stone[i])){
//						stone[i]=0;
//						break;
//					}
//                    else if(stone[j]==abs(stone[i])){
//						stone[i]=0;
//						stone[j]=0;
//						break;
//					}
//                    else 
//						stone[j]=0;
//                }
//            }
//        }
//    }
//    
//    for(i=0;i<=n-1;i++){
//    	if(stone[i]!=0) 
//			printf("%d ",stone[i]);    	
//	}
//
//    return 0;
//}
//---------------------------------------------------
//---------------------------------------------------

#include<stdio.h>
#include<stdlib.h>
//#include<math.h>

#define SIZE 10001
int main(){
	
	int stone[]={0},stoneSize=0;
	scanf("%d",&stoneSize);
	
	for(int i=0;i<stoneSize;i++){
		scanf("%d",&stone[i]);
	}
	
	for(int i=0;i<stoneSize;i++){
		if(stone[i]<0){
			for(int j=i-1;j>=0;j--){
				if(stone[j]>abs(stone[i])){
					stone[i]=0;
					break;
				}
				else if(stone[j]==abs(stone[i])){
					stone[j]=0;
					stone[i]=0;
					break;
				}
				else{
					stone[j]=0;
				}
			}
		}
		else{
			continue;
		}
	}
	
	for(int i=0;i<stoneSize;i++){
		if(stone[i]!=0){
			printf("%d ",stone[i]);
		}
	}
	
	return 0;
}
