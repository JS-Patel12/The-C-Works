#include <stdio.h>

main()
{
    int i, j;
    
    for(i=1;i<=5;i++)
	{
        
        for(j=1;j<i;j++)
		{
            printf(" ");
        }
        
        for(j=i;j<=5;j++)
		{
            	printf("%d",(5-j)%2==0 ? 1 : 0);
        }
        
        printf("\n");
    }
    //Reference to:
	//12345
	// 2345
	//  345
	//   45
	//    5
}

