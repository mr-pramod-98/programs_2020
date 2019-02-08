#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int compare(const void *a,const void *b) 
{ 
    return strcmp((char*)a,(char*)b);
} 

void BubbleSort(void *const a,int n,int size,int(*comp)(char *s1,char *s2))
 {
    int i,j; 
    char temp[10]; 
    for (j=0; j<(n*size)-10; j=j+size) 
    { 
        for (i=j+10; i<(n*size); i=i+size) 
        { 
            if (compare((char*)(a+j),(char*)(a+i)) > 0) 
            { 
                strcpy(temp,(char*)(a+j)); 
                strcpy((char*)(a+j),(char*)(a+i)); 
                strcpy((char*)(a+i), temp); 
            } 
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
 BubbleSort(a,5,sizeof(a[0]),compare);
 printf("after sorting\n");
 for(i=0;i<5;i++)
   puts(a[i]);
}
