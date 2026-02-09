//Write a program to convert a string to lowercase using strlwr. 
#include<stdio.h>
#include<string.h>
int main(){
	char a[25];
	puts("string:");
	gets(a);
	printf("%s",strlwr(a));
}
