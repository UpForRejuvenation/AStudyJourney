/*------------------------------------------------     
    ע�⣺����Դ����������£�����Ķ�������main������
    �����е��κ����ݣ����� Begin-End ���䲹����롣
---------------------------------------------------*/
void calBonus(double sales);
#include<stdio.h>
int main()
{
    double sales;// ���۶�
    scanf("%lf", &sales);
    calBonus(sales);
}

// ��ɴ˺���
void calBonus(double sales) {
	int bonus; 
    // ���ڴ������Ĵ���
    /********** Begin ********/
	if(sales>500000){
		printf("%.0f",200000*0.03+300000*0.025+(sales-50)*0.02);
	}
	else if(sales>200000){
		printf("%.0f",200000*0.03+(sales-20)*0.025);
	}
	else{
		printf("%.0f",sales*0.03);
	}
	/********** End **********/

}
