/*------------------------------------------------     
    注意：部分源程序给出如下，请勿改动主函数main和其它
    函数中的任何内容，仅在 Begin-End 区间补充代码。
---------------------------------------------------*/
void calBonus(double sales);
#include<stdio.h>
int main()
{
    double sales;// 销售额
    scanf("%lf", &sales);
    calBonus(sales);
}

// 完成此函数
void calBonus(double sales) {
	int bonus; 
    // 请在此添加你的代码
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
