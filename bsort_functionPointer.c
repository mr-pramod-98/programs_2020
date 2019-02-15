#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
 
	int compare(const void *a,const void *b,int ch) 
	{ 
	    if(ch==1)
	     {
	      return *(double*)a-*(double*)b;
	     }
	 
	     return strcmp((char*)a,(char*)b);
	} 

	void BubbleSort(const void *a,int n,int size,int(*comp)(const void *s1,const void *s2),int ch)
	 {
	    int i,j;
	    char temp[size];
	    const void *temp1=&temp; 
	    for (j=0; j<(n*size)-size; j=j+size) 
	    { 
		for (i=j+size; i<(n*size); i=i+size) 
		{ 
		    if ((compare((void*)(a+j),(void*)(a+i),ch) > 0)) 
		    { 
		        memcpy (temp1, (a+j), size);
		        memcpy ((a+j), (a+i), size); 
		        memcpy ((a+i), temp1, size); 
		    }
		} 
	    } 
	 }

	main()
	{
		 double a[5]={20,12,6,5,30};
		 char str[5][10]={"pramod","abhi","prakash","niranjan","manoj"};
		 int i;
 
 		printf("before sorting\t");
		 for(i=0;i<5;i++)
		    printf("%f\t",a[i]);
		 BubbleSort(a,5,sizeof(a[0]),compare,1);
		 printf("\nafter sorting\t");
		 for(i=0;i<5;i++)
		   printf("%f\t",a[i]);

		 printf("\n\nbefore sorting:\n");
		 for(i=0;i<5;i++)
		    puts(str[i]);
		 BubbleSort(str,5,sizeof(str[0]),compare,2);
		 printf("\nafter sorting\n");
		 for(i=0;i<5;i++)
		   puts(str[i]);
          
	}


