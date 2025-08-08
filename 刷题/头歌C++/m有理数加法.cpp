/*------------------------------------------------   
  注意：部分源程序给出如下，请勿改动主函数 main 和其它
  函数中的任何内容，仅在 Begin-End 区间补充代码。
---------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct rationalNumber{
    int fenzi; // 分子
    int fenmu; // 分母
} rationalNumber;

// 函数rnAdd：两个有理数相加
// 参数：x,y-两个有理数
// 返回值：x+y的最简分数形式
rationalNumber* rnAdd(rationalNumber x, rationalNumber y);


int main()
{
    char c;
    rationalNumber x, y;
    rationalNumber* z;
    // 输入两个有理数
    scanf("%d %d",&x.fenzi,&x.fenmu);
    scanf("%d %d",&y.fenzi,&y.fenmu);
    z = rnAdd(x,y);     // 有理数相加
    // 输出相加的结果
    if(z->fenmu == 1)
        printf("%d\n",z->fenzi);
    else if(z->fenzi==0){
        printf("%d",0);
    }
    else
        printf("%d/%d\n",z->fenzi,z->fenmu);
    return 0;
}

// 请在此添加代码，实现函数rnAdd
/********** Begin *********/
rationalNumber* rnAdd(rationalNumber xc, rationalNumber yc){
	rationalNumber* ret=(rationalNumber*)malloc(sizeof(rationalNumber*));
	
	if(xc.fenmu==yc.fenmu){
		ret->fenzi=xc.fenzi+yc.fenzi;
		ret->fenmu=xc.fenmu+yc.fenmu;
	}
	else{
		int xm=xc.fenmu,ym=yc.fenmu;
		xc.fenmu=xc.fenmu*ym;
		xc.fenzi=xc.fenzi*ym;
		
		yc.fenmu=yc.fenmu*xm;
		yc.fenzi=yc.fenzi*xm;
		
		ret->fenmu=xc.fenmu;
		ret->fenzi=xc.fenzi+yc.fenzi;
	}
	
	int a=ret->fenzi,b=ret->fenmu;
	
	if(a==0||b==1){
		return ret;
	}
	
	while(b!=0){
		if(b>a){
			int temp=b;
			b=a;
			a=temp;	
		}
			
		int rem=a%b;
		a=b;
		b=rem;
	}
	
	ret->fenzi/=a;
	ret->fenmu/=a;
	
	return ret;
}
/********** End **********/



