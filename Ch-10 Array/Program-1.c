#include <stdio.h>

main()
{
	int size;
	
	printf("Enter the number of elements : ");
	scanf("%d",&size);
	
	int a[size],i;
	
	for(i=0;i<size;i++)
	{
		printf("Enter the elements : ");
		scanf("%d",&a[size]);
	}
	printf("\n\nOutput\n\n");
	printf("The length of an array : %d",size);
}
