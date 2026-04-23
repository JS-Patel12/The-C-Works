#include <stdio.h>

main()
{
	float p,r;
	int n;
	printf("Enter the principle amount :");
	scanf("%f",&p);
	printf("\n");
	printf("Enter the rate of interest :");
	scanf("%f",&r);
	printf("\n");
	printf("Enter the time :");
	scanf("%d",&n);
	printf("\n");
	printf("Simple Interest : %.2f",(p*r*n/100));
}
