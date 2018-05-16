#include <stdio.h>

int main(void)
{
	int integer1; //設定變數 
	int integer2;
	int sum;
	
	printf("Enter first integer\n");
	scanf("%d",&integer1); //輸入第一個變數 
	
	printf("Enter second integer\n");
	scanf("%d",&integer2); //輸入第二個變數 
	
	sum=integer1+integer2; //將兩變數相加 
	
	printf("sum is %d\n",sum); //輸出變數和 
}
