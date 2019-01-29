#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 10
int compare(char s1,char s2)
{
 if(strcmp(s1,s2)>0)
     return 1;
 else
     return 0;
}

void swaping(char temp,char s1,char s2)
{
 strcpy(s1,temp);
 strcpy(s2,s1);
 srtcpy(temp,s2);
}

void qsort(char array_str[SIZE][20],int first,int last,int(*comp)(char s1,char s2),void(*swap)(char temp,char s1,char s2))
{
 int i,j,pivot,temp;
 if(first<last)
 {
  pivot=first;
  j=last;
  while(i<j)
  {
   while((*comp)(array_str[i],array_str[pivot])==0&&i<last)
         i++;
   while((*comp)(array_str[j],array_str[pivot])==1)
         j--;
   if(i<j)
   {
    (*swap)(temp,array_str[i],array_str[j]);
   }
  }
  (*swap)(temp,array_str[pivot],array_str[j]);
  qsort(array_str,first,j-1,compare,swaping);
  qsort(array_str,j+1,last,compare,swaping);
 }
}

void main()
{
   int i,array_str[SIZE][205];
   
   printf("Enter %d strings:\n",SIZE);
   for(i=0;i<SIZE;i++)
        scanf("%s",array_str[i]);
        
   qsort(array_str,0,SIZE-1,compare,swaping);
   
   printf("Order of Sorted strings:\n");
   for(i=0;i<SIZE;i++)
      printf(" %s\n",array_str[i]);
 }     
      
