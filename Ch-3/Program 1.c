#include <stdio.h>

main()
{
	float x;
	float y;
	printf("Enter the value of x :");
	scanf("%f",&x);
	printf("\n");
	printf("Enter the value of y :");
	scanf("%f",&y);
	printf("\n");
	printf("(%.2f + %.2f)*(%.2f + %.2f) : %.2f",x,y,x,y,(x+y)*(x+y));
}
