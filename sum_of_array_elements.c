#include<stdio.h>
#include<conio.h>

int addition (int a[],int n)
{
 int i,sum=0;
 for(i=0;i<n;i++)
  sum=sum+a[i];
 return sum; 
}

void main()
{
 int n,a[50],sum;
 clrscr();
 printf("enter the length of array\n");
 scanf("%d",&n);
 printf("enter array elements\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 sum=addition(a,n);
 printf("sum=%d",sum);
 getch();
 }
