#include<stdio.h>
#include<stdlib.h>

struct student
{
 char name[10];
 int age,year; 
};

typedef struct student node;

node create(int i)
{
 node temp;
 printf("enter name,age and year of study of student-%d\n",i+1);
 scanf("%s%d%d",temp.name,&temp.age,&temp.year);
 return temp;
}

int comp_name(const void *a,const void *b) 
{
 node *x = (node *) a;
 node *y = (node *) b;
 return strcmp(x->name,y->name);
}

int comp_age(const void *a,const void *b) 
{
 node *x = (node *) a;
 node *y = (node *) b;
 return x->age - y->age;
}

int comp_year(const void *a,const void *b) 
{
 node *x = (node *) a;
 node *y = (node *) b;
 return x->year - y->year;
}


main()
{
 int i,n,opt;
 node data[100];

 printf("number of student data you want to enter\n");
 scanf("%d",&n);

 for(i=0;i<n;i++)
  {
   data[i]=create(i);
  }

 while(1)
 {
  printf("on which field do u want to sort\n1.name\n2.age\n3.year\n4.exit\n");
  scanf("%d",&opt);
  
  printf("before sorting\n");
  printf("name\tage\tyear\n");
  for(i=0;i<n;i++)
  {
   printf("%s\t%d\t%d\n",data[i].name,data[i].age,data[i].year);
  } 

  switch(opt)
  {
   case 1: qsort(data,n,sizeof(node),comp_name);
           printf("after sorting\n");
           printf("name\tage\tyear\n");
           for(i=0;i<n;i++)
           {
            printf("%s\t%d\t%d\n",data[i].name,data[i].age,data[i].year); 
           }
           break;
  
   case 2: qsort(data,n,sizeof(node),comp_age);
           printf("after sorting\n");
           printf("name\tage\tyear\n");
           for(i=0;i<n;i++)
           {
            printf("%s\t%d\t%d\n",data[i].name,data[i].age,data[i].year); 
           }
           break;

   case 3: qsort(data,n,sizeof(node),comp_year);
           printf("after sorting\n");
           printf("name\tage\tyear\n");
           for(i=0;i<n;i++)
           {
            printf("%s\t%d\t%d\n",data[i].name,data[i].age,data[i].year); 
           }
           break;
  
   case 4: exit(0);
   
   default: printf("invalid option\n");
  }
 }
}
