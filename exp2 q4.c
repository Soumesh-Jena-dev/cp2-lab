//Write a program to copy one string to another using strcpy. 
#include<stdio.h>
#include<string.h>
int main(){
	char a[25],b[20];
	puts("first string:");
	gets(a);
	puts("second string");
	gets(b);
	strcpy(a,b);
	printf("Result=%s",a);
}
