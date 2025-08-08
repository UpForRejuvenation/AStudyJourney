#include <stdio.h>
int f[10000];

int search(int n,int* nums, int T){
    /********* Begin *********/
	int l=0,r=n-1,mid=(l+r)/2;
	while(l<=r){
		if(f[mid]==T){
			return mid;
		}
		else if(f[mid]>T){
			r=mid-1;
			mid=(l+r)/2;
		}
		else{
			l=mid+1;
			mid=(l+r)/2;
		}
	}
	return -1;
    /********* End *********/
}


int main(){
    int n,T;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
		scanf("%d",&f[i]);
		
    scanf("%d",&T);
    
    int result=search(n,f,T);
    printf("%d",result);
    return 0;
}
