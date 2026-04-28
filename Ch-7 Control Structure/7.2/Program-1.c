#include <stdio.h>

main()
{
	int a, b, c;
	
	printf("Enter the first value : ");
	scanf("%d",&a);
	printf("Enter the second value : ");
	scanf("%d",&b);
	printf("Enter the third value : ");
	scanf("%d",&c);
	
	if(a < b)
	{
		if(a < c)
		{
			printf("%d is minimum.",a);
		}
		else
		{
			printf("%d is minimum.",c);
		}
	}
	else
	{
		if(b < c)
		{
			printf("%d is minimum.",b);
		}
		else
		{
			printf("%d is minimum.",c);
		}
	}
}
