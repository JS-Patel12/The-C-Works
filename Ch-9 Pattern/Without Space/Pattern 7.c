#include <stdio.h>

main()
{
	int i,j;
	
    for(i = 0; i < 5; i++)
	{
        for(j = i; j >= 0; j--)
		{
            printf("%c ", 'A' + j);
        }
    	printf("\n");
    }
	//Reference to:
	//1
	//21
	//321
	//4321
	//54321
}
