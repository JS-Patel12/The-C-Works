#include <stdio.h>

main()
{
	float marks1, marks2, marks3;
	
	printf("Enter the marks of first subject : ");
	scanf("%f",&marks1);
	printf("Enter the marks of second subject : ");
	scanf("%f",&marks2);
	printf("Enter the marks of third subject : ");
	scanf("%f",&marks3);
	
	float average = (marks1 + marks2 + marks3)/300*100;
	
	printf("Your average marks are : %.2f",average);
}
