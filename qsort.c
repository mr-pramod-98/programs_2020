#include<stdio.h>
#include<string.h>

int comp(const void*a,const void*b)
{
 return strcmp(*(char* const*)a,*(char* const*)b);
}

main()
{
 char *a[10]={"pramod","abhi","niranjan","manoj","prakash"};
 int i;
 printf("before sorting\n");
 for(i=0;i<5;i++)
    puts(a[i]);
 qsort(a,5,sizeof(a[0]),comp);
 printf("after sorting\n");
 for(i=0;i<5;i++)
   puts(a[i]);
}
