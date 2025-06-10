#include<stdio.h>
int main(){

	int by, cr;
	
	printf("Enter the Current Year: ");
	scanf("%d", &cr);
	
	printf("Enter your BirthYear: ");
	scanf("%d", &by);
	
	printf("\nYour age is %d", cr - by);
	
return 0;
}
