#include <stdio.h>
int main()
{
	int num1,num2,*ptr1,*ptr2,sum;
	printf("enter the number");
	scanf("%d",&num1);
	printf("enter the number");
	scanf("%d",&num2);
	*ptr1=&num1;
	*ptr2=&num2;
	sum=*ptr1+*ptr2;
	printf("sum of two numbers : %d \n,sum);
	return 0;
}

