#include <stdio.h>
int main ()
{
	int choice,a,b;
	printf("enter choice \n addition :press 1 \n substraction :press 2 \n multiplication: press 3 \n division:press 4\n");
	scanf("%d",&choice);
	printf ("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	switch (choice)
	{ 
case1:
		printf("%d +%d =%d",a,b,a+b);
		break;
case2:
		printf("%d-%d=%d",a,b,a-b);
		break;
case3:
		printf("%d*%d=%d",a,b.a*b);
               break;
case4:
	       printf("%d/%d=%d",a,b,a/b);
                break;

