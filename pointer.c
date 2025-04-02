#include <stdio.h>
int main()
{
	int num1,num2,*ptr1,*ptr2,temp;
	printf("enter the number:");
	scanf("%d",&num1);
        printf("enter the number:");
	scanf("%d",&num2);
	*ptr1=&num1;
	*ptr2=&num2;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
        printf("the swapped two numbers are %d,%d",num1,num2);
	return 0;
}

        
