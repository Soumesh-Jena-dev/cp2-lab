/* Write a program to define a structure for a student containing fields for name, 
roll number, and marks. Input and display the details.*/
#include<stdio.h>
struct student
{
	char n[20];
	int r;
	float m;
};
void main(){
	struct student s1={"Sharma",20,50.8};
	struct student s2;
	printf("enter student info.");
	scanf("%s%d%f",&s2.n,&s2.r,&s2.m);
	printf("Name=%s\nRoll no.=%d\nMarks=%f",s2.n,s2.r,s2.m);
	printf("Name=%s\nRoll no.=%d\nMarks=%f",s1.n,s1.r,s1.m);
}
