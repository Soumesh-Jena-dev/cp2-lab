/*Create a nested structure to store a student’s details (name, roll number, and 
address where address is another structure).*/ 
#include<stdio.h>
struct student
{
	struct address
	{
		char ci[30];
		char dist[30];
		char st[30];
		int pin;
	};
	struct address add;
		char n[20];
	  	int r;
		float m;
 	};
 void main()
 {
 	struct student s1={"Sharma",20,50.8};
	struct student s2;
	printf("enter student info.");
	scanf("%s%d%f",&s2.n,&s2.r,&s2.m);
	printf("Name=%s\nRoll no.=%d\nMarks=%f",s2.n,s2.r,s2.m);
	printf("Name=%s\nRoll no.=%d\nMarks=%f",s1.n,s1.r,s1.m);
	struct address a1={"bbsr","khurdha","odisha",797867};
	struct address a2;
	printf("enter address:");
	scanf("%s%s%s%d",&a2.ci,&a2.dist,a2.st,a2.pin);
	printf("City=%s\nDist=%s\nState=%s\nPin=%d",a2.ci,a2.dist,a2.st,a2.pin);
	printf("City=%s\nDist=%s\nState=%s\nPin=%d",a1.ci,a1.dist,a1.st,a1.pin);
 }
