#include <stdio.h>

main()
{
	int num;
	
	printf("Enter any number : ");
	scanf("%d",&num);
	
	if(num > 0)
	{
		printf("This number is Positive.");
	}
	else if(num < 0)
	{
		printf("This number is Negative.");
	}
	else
	{
		printf("This number is Neutral.");
	}
}
