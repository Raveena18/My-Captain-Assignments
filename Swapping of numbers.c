//swapping numbers//
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the first number.\n");
	scanf("%d",&a);
	printf("Enter the second number.\n");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The value of nembers after swapping.\n");
	printf("the value of a :%d.\n",a);
	printf("the value of b :%d.\n",b);
	return 0;
}
