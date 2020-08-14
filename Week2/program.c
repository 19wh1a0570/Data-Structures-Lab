#include<stdio.h>
struct complex
{
	int real,imag;
};
void add(struct complex c1,struct complex c2)
{
	printf("%d+i%d\n",c1.real+c2.real,c1.imag+c2.imag);
}
void sub(struct complex c1,struct complex c2)
{
	printf("%d-i%d\n",c1.real-c2.real,c1.imag-c2.imag);
}
void mul(struct complex c1,struct complex c2)
{
	int r =(c1.real*c2.real)-(c1.imag*c2.imag);
	int i =(c1.real*c2.imag)+(c2.real*c1.imag);
	printf("%d+i%d\n",r,i);
}
int main()
{
	struct complex c1,c2;
	scanf("%d",&c1.real);
	scanf("%d",&c1.imag);
	scanf("%d",&c2.real);
	scanf("%d",&c2.imag);
	add(c1,c2);
	sub(c1,c2);
	mul(c1,c2);
}
