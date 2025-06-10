#include<stdio.h>
int main(){

	char ch;
	
	printf("Enter a Character: ");
	scanf("%c", &ch);
	
	switch(ch){
		
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': 
		 
			printf("this is vowel");
		break;
		
		default: printf("This is consonant");
	}
	
return 0;
}

