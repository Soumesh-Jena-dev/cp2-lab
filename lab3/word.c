#include<string.h>
#include<stdio.h>
void main(){
	int c=0,i;
	char s[25];
	puts("sentence:\n");
	gets(s);
	for(i=0;s[i]!=0;i++){
		if(s[i]==' '){
			c++;
		}
	}
		printf("%d",c+1);
}
