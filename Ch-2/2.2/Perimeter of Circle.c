#include <stdio.h>

main()
{
	float r;
	const float PI = 3.14;
	printf("Enter the radius of circle :");
	scanf("%f",&r);
	printf("\n");
	printf("Perimeter of circle : %.2f",(2*PI*r));
}
