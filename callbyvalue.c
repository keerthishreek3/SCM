#include<stdio.h>
int multiply(int a,int b)
{
	return a*b;
}
int main()
{
	int a,b,result;
	printf("enter the number");
	scanf("%d",&a);
	printf("enter trhe number");
	scanf("%d",&b);
        result=multiply(a,b);
	printf("multiplication of %d  and %d is :%d\n",a,b,result);
	return 0;
}
