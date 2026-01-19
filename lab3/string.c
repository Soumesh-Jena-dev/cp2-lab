#include<stdio.h>
#include<string.h>
void main(){
	int c=0;
	int i;
	char n[25];
	puts("name");
	gets(n);
	for(i=0;n[i]!='\0';i++){
		c++;
	}
	if(c==0){
		printf("null");
	}
	else{
		printf("%d",c);
	}
}
