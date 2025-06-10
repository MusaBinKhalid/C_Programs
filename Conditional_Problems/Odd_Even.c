#include<stdio.h>
int main(){

	int a;
	
	printf("Enter a Number: ");
	scanf("%d", &a);

	if(a%2==0){
		printf("The Number is Even!");
	}
	
	else{
		printf("The Number is Odd!");
	}
	
return 0;
}

