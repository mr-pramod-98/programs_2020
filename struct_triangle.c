#include<stdio.h>
#include<conio.h>

struct triangle
{
 int h,b;
 float area;
};

float area_tri(struct triangle a)
{
 return (0.5*(a.h)*(a.b));
}

void main
{
 struct triangle T;
 clrscr();
 printf("enter height and base of a triangle\n");
 scanf("%d%d"&T.h,&T.b);
 T.area=area_tri(T);
 printf("area=%f"T.area);
 getch();
}
