#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
void swaping(const void *a,const void *b) 
{ 
    char temp[10]; 
    strcpy((char*)temp,(char*)a); 
    strcpy((char*)a,(char*)b);
    strcpy((char*)b,(char*)temp);
} 

void BubbleSort(char a[5][10],int n,int size,void(*swap)(char *s1,char *s2))
 {
  int i,j;
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
    if(strcmp(a[i],a[j])>=0)
       swaping(&a[i],&a[j]);
   }
  }
 }

main()
{
 char a[5][10]={"pramod","abhi","niranjan","manoj","prakash"};
 int i;
 printf("before sorting\n");
 for(i=0;i<5;i++)
    puts(a[i]);
 BubbleSort(a,5,sizeof(a[0]),swaping);
 printf("after sorting\n");
 for(i=0;i<5;i++)
   puts(a[i]);
}
