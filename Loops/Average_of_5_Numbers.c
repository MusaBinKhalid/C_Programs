#include<stdio.h>
int main(){

	float num,sum,count,average;
	
	sum = 0;
	count = 0;
	
	while (count<5){
		printf("Enter Number: ");
		scanf("%f", &num);
		sum = (sum + num);
		count++;
	}
	
		average = (sum/count);
		printf("The average is %.2f", average);

return 0;
}

