//Write a program to compare two strings using strcmp. 
#include<stdio.h>
#include<string.h>
int main(){
	char c[25],d[20];
	puts("first string:");
	gets(c);
	puts("second string:");
	gets(d);
	if(strcmp(c,d)==0){
		printf("strings are equal");
	}
	else{
		printf("strings are not equal");
	}
}
