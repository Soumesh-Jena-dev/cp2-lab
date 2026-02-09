//Develop a program to concatenate two strings using strcat.
#include<stdio.h>
#include<string.h>
int main(){
	char a[25],b[20];
	puts("first string:");
	gets(a);
	puts("second string");
	gets(b);
	strcat(a,b); 
	printf("%s",a);
}
