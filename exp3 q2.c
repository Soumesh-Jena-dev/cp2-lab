 /*How can you define a structure to store a date (day, month, year) and display it 
in the format DD/MM/YYYY?*/
#include<stdio.h>
struct day
{
	int d,m,y;
};
void main(){
	struct day d1={2,4,5};
	struct day d2={3,8,9};
	struct day d3;
	d3.y=d1.y+d2.y;
	d3.m=d1.m+d2.m;
	d3.d=d1.d+d2.d;
	 printf("%d/%d/%d",d3.d,d3.m,d3.y);
}
