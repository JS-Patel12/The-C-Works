#include <stdio.h>

main()
{
	int a, b;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	
	if(a > b)
	{
		printf("The minimum value is : %d",b);
	}
	else
	{
		printf("The minimum value is : %d",a);
	}
}
