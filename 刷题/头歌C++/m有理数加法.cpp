/*------------------------------------------------   
  ע�⣺����Դ����������£�����Ķ������� main ������
  �����е��κ����ݣ����� Begin-End ���䲹����롣
---------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct rationalNumber{
    int fenzi; // ����
    int fenmu; // ��ĸ
} rationalNumber;

// ����rnAdd���������������
// ������x,y-����������
// ����ֵ��x+y����������ʽ
rationalNumber* rnAdd(rationalNumber x, rationalNumber y);


int main()
{
    char c;
    rationalNumber x, y;
    rationalNumber* z;
    // ��������������
    scanf("%d %d",&x.fenzi,&x.fenmu);
    scanf("%d %d",&y.fenzi,&y.fenmu);
    z = rnAdd(x,y);     // ���������
    // �����ӵĽ��
    if(z->fenmu == 1)
        printf("%d\n",z->fenzi);
    else if(z->fenzi==0){
        printf("%d",0);
    }
    else
        printf("%d/%d\n",z->fenzi,z->fenmu);
    return 0;
}

// ���ڴ���Ӵ��룬ʵ�ֺ���rnAdd
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



