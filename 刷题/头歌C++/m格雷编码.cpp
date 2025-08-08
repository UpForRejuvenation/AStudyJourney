//#include <stdio.h>
//#include <stdlib.h>
//
//int* grayCode(int n, int* returnSize) {
//    *returnSize = 1 << n; // 计算总数量 2^n
//    int* res = (int*)malloc(*returnSize * sizeof(int));
//    
//    for(int i = 0; i < *returnSize; ++i) {
//        res[i] = i ^ (i >> 1); // 核心公式[2,6](@ref)
//    }
//    return res;
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    
//    int size;
//    int* result = grayCode(n, &size);
//    
//    for(int i = 0; i < size; ++i) {
//        printf("%d%c", result[i], (i == size-1) ? '\n' : ',');
//    }
//    
//    free(result);
//    return 0;
//}

#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	int SIZE=1<<n;
	int res[SIZE];
	
	for(int i=0;i<SIZE;i++){
		res[i]=i^(i>>1);
	}
	
	printf("[");
	for(int i=0;i<SIZE;i++){
		printf("%d",res[i]);
		if(i<SIZE-1){
			printf(", ");
		}
	}
	printf("]");
	return 0;
}
