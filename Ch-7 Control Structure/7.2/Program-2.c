#include <stdio.h>

main()
{
	int a, b, c, d;
	
	printf("Enter the first value : ");
	scanf("%d",&a);
	printf("Enter the second value : ");
	scanf("%d",&b);
	printf("Enter the third value : ");
	scanf("%d",&c);
	printf("Enter the fourth value : ");
	scanf("%d",&d);
	
	if(a < b)
	{
		if(a < c)
		{
			if(a < d)
			{
				printf("%d is minimum.",a);
			}
			else
			{
				printf("%d is minimum.",d);
			}
		}
		else
		{
			if(c < d)
			{
				printf("%d is minimum.",c);
			}
			else
			{
				printf("%d is minimum.",d);
			}
		}
	}
	else
	{
		if(b < c)
		{
			if(b < d)
			{
				printf("%d is minimum.",b);
			}
			else
			{
				printf("%d is minimum.",d);
			}
		}
		else
		{
			if(c < d)
			{
				printf("%d is minimum.",c);
			}
			else
			{
				printf("%d is minimum.",d);
			}
		}
	}
}
