//Create a program to find the length of a string using strlen. 
#include<stdio.h>
#include<string.h>
int main(){
	char c[25];
	puts("string:");
	gets(c);
	printf("length=%d",strlen(c));
}
