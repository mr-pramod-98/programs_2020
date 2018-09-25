#include<stdio.h>
#include<conio.h>

float triangle(int h,int b)
{
 return (0.5*h*b);
}

void main()
{ 
 int h,b;
 float area;
 clrscr();
 printf("enter height and base of a triangle\n");
 scanf("%d%d",&h,&b);
 area=triangle(h,b);
 printf("area=%f"area);
 getch();
}
