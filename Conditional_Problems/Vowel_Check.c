#include<stdio.h>
int main(){

	char ch;
	
	printf("Enter a Character: ");
	scanf(" %c", &ch);
	
	switch(ch){
		
		      case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
		 
			printf("This is vowel");
		break;
		
		default: printf("This is consonant");
	}
	
return 0;
}
