// Demonstrate: How do you declare a bit-field to store a value that ranges from 0 //
#include<stdio.h>
struct store
{
	unsigned int n:4;
};
int main(){
	 struct store a,b,c,d;
	 a.n=-1;
	 b.n=0;
	 c.n=15;
	 d.n=16;
	printf("\n%d",sizeof(a));
	 printf("value=%u",a.n);
	 printf("value=%u",b.n);
	 printf("value=%u",c.n);
	 printf("value=%u",d.n);
}
