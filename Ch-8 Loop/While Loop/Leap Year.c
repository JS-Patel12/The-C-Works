#include <stdio.h>

int main() {
    int start, end;
    
    printf("Enter the start year: ");
    scanf("%d", &start);
    
    printf("Enter the end year: ");
    scanf("%d", &end);

    printf("\nLeap Year:\n");
    
    while (start <= end) 
	{
        if (start % 4 == 0) {
            printf("%d\n", start);
        }
        
        start++;
	}
}

