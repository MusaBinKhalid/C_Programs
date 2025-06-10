#include<stdio.h>
int main(){

	int a;
	float x,y;

	while(1){
		
		printf("***UNIT CONVERTER!**");
		printf("\n\n1. cm to inches\n2. inches to cm\n3. kg to pounds\n4. pounds to kg\n5. Exit\n\n-->Enter your Choice: ");
		scanf("%d", &a);
	
	
		if(a==1){
			printf("\n\nEnter Length in cm: ");
			scanf("%f", &x);
			
			y = x / 2.54;
			printf("%.2f cm is %.2f inches\n\n", x,y);
		}
		
		else if(a==2){
			printf("\n\nEnter Length in inches: ");
			scanf("%f", &x);
			
			y = x * 2.54;
			printf("%.2f inches is %.2f cm\n\n", x,y);
		}
		
		else if(a==3){
			printf("\n\nEnter Weight in kg: ");
			scanf("%f", &x);
			
			y = x * 2.20462;
			printf("%.2f kg is %.2f lbs\n\n", x,y);
		}
		
		else if(a==4){
			printf("\n\nEnter Weight in lbs: ");
			scanf("%f", &x);
			
			y = x / 2.20462;
			printf("%.2f lbs is %.2f kg\n\n", x,y);
		}
		
		else if(a==5){
			break;
		}
		
		else{
			printf("Enter Valid Choice!\n\n");
		}
	}
	
return 0;
}

