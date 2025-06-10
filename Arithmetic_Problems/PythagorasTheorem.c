#include<stdio.h>
#include<math.h>

int main(){

	float a,b,c,x,y,z;
	
	printf("Enter sides of triangle: ");
	scanf("%f %f %f", &a,&b,&c);
	
	x = (a*a) + (b*b);
	y = c*c;
	z = sqrt(x);
	
	if(z==y){
	printf("The triangle is right angled");
	}

	else{
		printf("Not");
	}

return 0;
}

