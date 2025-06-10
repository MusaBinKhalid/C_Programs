#include<stdio.h>
int main(){

	int a,b,c;
	
	printf("Enter A: \n");
	scanf("%d", &a);
	
	printf("Enter B: \n");
	scanf("%d", &b);
	
	c = a;
	a = b;
	b = c;	

	printf("After Swapping, A = %d and B = %d", a,b);

return 0;
}

