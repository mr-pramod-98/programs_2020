# sum-of-fraction
#include<stdio.h>
#include<conio.h>
struct fraction
{
 int n,d;
}f[100];

struct sum_of_fraction(struct fraction a[],n)
{
 int i;
 struct fraction sum;
 sum.n=a[0].n;
 sum.d=a[0].d;
 for(i=1;i<n;i++)
 {
  sum.n=((sum.n)*(a[i].d))+((sum.d)*(a[i].n));
  sum.d=(sum.d)*(a[i].d);
 }
 return sum;
} 
void main()
{
 int i,num;
 struct fraction SUM;
 clrscr();
 printf("enter number of fractions\n");
 scanf("%d,&num");
 printf("enter the fractions e.g(2 3)//2 is n and 3 is d");
 for(i=0;i<num;i++)
 {
  printf("%d%d,&f[i].n,&f[i].d");
 }
 SUM = sum_of_fractions(f[100],num);
 printf("sum=%d%d,sum.n,sum.d");
 getch();
} 
 
