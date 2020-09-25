#include<stdio.h>
int main()
{
	printf("pick an item between 1 and 5.\n");
	int choice=0;
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
		   printf("You chose pizza.\nThe price is Rs.300");
		   break;
		case 2:
		   printf("You chose Momos.\nThe price is Rs.100");
		   break;
		case 3:
		   printf("You chose Biriyani.\nThe price is Rs.350");
		   break;
        case 4:
           printf("You chose pasta.\nThe price is Rs.200");
           break;
        case 5:
        	printf("you chose grilled sandwich.\n,The price is 100");
           default : printf("Invalid choice");
           break;
     return 0;
	}
}
