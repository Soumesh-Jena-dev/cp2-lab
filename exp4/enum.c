//Write a program to use enumeration to represent days of the week. 
#include<stdio.h>
enum week{mon,tue,wed,thurs,fri,sat,sun};
void main(){
	enum week c;
	for(c=mon;c<=sun;c++){
		printf("%d\n",c);
	}
}
