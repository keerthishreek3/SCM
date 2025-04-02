#include <stdio.h>
int main()
{
	int num1,num2,*ptr1,*ptr2;
	printf("enter the number:");
	scanf("%d",&num1);
        printf("enter the number:");
	scanf("%d",&num2);
	*ptr1=&num1;
	*ptr2=&num2;


