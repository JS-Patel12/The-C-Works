#include <stdio.h>

main()
{
    int a, b, c, min;
    
    printf("Enter the first value : ");
    scanf("%d", &a);
    printf("Enter the second value : ");
    scanf("%d", &b);
    printf("Enter the third value : ");
    scanf("%d", &c);
    
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    
    printf("%d is minimum.", min);
}
