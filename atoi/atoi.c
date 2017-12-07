#include <stdio.h>
#include <ctype.h>
#include <string.h>
int atoi(char * str);

int main() { 
	
	char str1[] = "-110";
	int  number = 0;
	number = atoi(str1);	
	
	printf("number is [%lu]\n",strlen(str1));
	printf("number is [%lu]\n",sizeof(str1));
	printf("number is [%d]\n",number);
	
	return 0; 
}

int atoi(char * str) { 

	int i, n, sign;
	
	for(i = 0; isspace(str[i]); i++)
		;
	sign = (str[i] == '-') ? -1 : 1; 
	if(str[i] == '+' || str[i] == '-') 
		i++; 
	for(n = 0; isdigit(str[i]); i++)
		n = 10 * n + (str[i] - '0');

	printf("number is [%d]\n",n);
	return sign * n; 
}
