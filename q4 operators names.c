#include<stdio.h>
#include<conio.h>
int main()
{
	char s[10];
	printf("\n enter an operator:-");
	gets(s);
	switch(s[0])
	{
		case '>':
			if(s[1]=='='){
				printf("\n greater than or equals to");
			}
			else{
				printf("\ngreater than");
			}
			break;
		case'<':
			if(s[1]=='='){
				printf("\n lessthan or equalsto");
			}
			else{
				printf("\n lessthan");
			}
			break;
		case'=':
			if(s[1]=='='){
				printf("\n equalsto");
			}
			else{
				printf("\n assignment");
			}
			break;
		case'!':
			if(s[1]=='='){
				printf("\n not equal");
			}
			else{
				printf("\n bit not");
			}
			break;
		case'&': 
			if(s[1]=='&'){
				printf("\nLogical AND"); 
			}
			else{
				printf("\n Bitwise AND"); 
			}
			break;
		case'|': 
			if(s[1]=='|') {
				printf("\nLogical OR"); 
			}
			else{
				printf("\nBitwise OR");
			}
			break;
		case'+':
			printf("\n Addition"); 
			break;
		case'-': 
			printf("\nSubstraction"); 
			break;
		case'*': 
			printf("\nMultiplication"); 
			break;
		case'/':	
			printf("\nDivision");
			break;
		case'%': 
			printf("Modulus"); 
			break;
		default: 
			printf("\n Not a operator");


	}
}

