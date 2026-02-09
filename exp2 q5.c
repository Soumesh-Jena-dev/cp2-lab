//Write a program to check if a string is a palindrome using strrev.
#include<stdio.h>
#include<string.h>
int main(){
	char c[25],d[20];
	puts("string:");
	gets(c);
	strcpy(d,c);
	strrev(c);
	if(strcmp(c,d)==0){
		printf("palindrome");
	}
	else{
		printf("not palindrome");
	}
}
