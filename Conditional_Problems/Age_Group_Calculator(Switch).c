#include<stdio.h>
int main(){

	int age;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if(age<13){
		age = 1;
	}
	
	else if(age>19){
		age = 2;
	}
	
	else{
		age = 3;
	}

	switch(age){
		
		case 1:
				printf("You are a Child!");
			break;
		
		case 2:
				printf("You are an Adult!");
			break;
		
		case 3:
				printf("You are a Teenager!");
			break;
		
	}

return 0;
}

