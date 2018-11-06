#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct file
{
   char name[50];
   int isdir;
   srtuct file *left,*right;
   struct file *dir,*headdir;
};

typedef struct file * NODE;

NODE getnode(int frd)
{
   NODE newnode;
   newnode=(NODE)malloc(sizeof(struct file));
   newnode->left=newnode->right=NULL;
   newnode->dir=newnode->headdir=NULL;
   printf("enter the name of file/dir");
   gets(newnode->name);
   if(frd==1)
       newnode->isdir=1;
   else
       newnode->isdir=0;
   return newnode;   
}

void path(NODE ele)
{
    NODE p;
    p=ele;
    while(p->left!=NULL)
        p=p->left;
    if(p->headdir!=NULL)
        path(p->headdir);
    printf("/%s",ele->name);
}  

NODE search(NODE root,char scr[],NODE head,int *p)
{
   NODE temp;
   int s_done;
   s_done=*p;
   if((root!=NULL)&&(root->name==src))
   {
       if(s_done!=1)
       {
          s_done=1;
          ele=root;
       }
   }
   if((root!=NULL)&&(root->isdir==1))
   {
       root=search(root->dir,src,root,&s_done);
   } 
   temp=root;
   while(temp!=NULL)
   {
       if(temp->name==src)
       {
           if(s_done!=1)
           {
              s_done=1;
              ele=temp;
           } 
       }
       if(temp->isdir==1)
       {
           temp=search(temp->dir,src,temp,&s_done);
       } 
       if(temp->name==src)
       {
           if(s_done!=1)
           {
               s_done=1;
               ele=temp;
           } 
       } 
       temp=temp->right;
   }
   if(head->right==NULL)
        return head;
   else
        return head->right;
}

NODE check(int ard,NODE root)
{
     NODE newnode;
     char src[50];
     int s_done=0;
     if(ard==1)
     {
          printf("enter the name of the directory under which you want to create a file/dir\n");
          gets(src);
          newnode=search(root,scr,root,&s_done);
          if(ele->name==src)
          {
               newnode=ele;
               return newnode;
          } 
          else
          { 
               newnode=NULL;
               return newnode; 
          }
     }  
     if(ard==0)
     {
          printf("enter the name of the file/dir to be deleted\n");
          gets(src);
          newnode=search(root,src,root,&s_done);
          if(ele->name==src)
          {
               newnode=ele;
               return newnode;
          }   
         else
         {
              newnode=NULL;
              return newnode;
         }
     }  
} 

int add(int frd,NODE root)
{
     NODE newnode,temp,dirnode;
     if(root->dir==NULL)
     {
          newnode=getnode(frd);
          root->dir=newnode;
          newnode->headdir=root;
          if(frd==0)
               printf("a file created under root\n");
          else
               printf("a dir created under root\n");
          return 1;
     }
     else
     {
          dirnode=ckech(1,root);
          if(dirnode==NULL)
               return 0;
          newnode=getnode(frd);
          if(dirnode->dir==NULL)
          {
               dirnode->node=newnode;
               newnode->headdir=dirnode;
          } 
          else
          {
               temp=dirnode->dir;
               while(temp->right!=NULL)
                     temp=temp->right;
               temp->left=newnode;
          }
          if(frd==0)
                printf("a file created under specified directory\n");
          else
                printf("a dir creted under specified directory\n");
     }   
}  

int del(int frd,NODE root)
{
     NODE newnode,p;
     newnode=check(0,root);
     if(newnode==NULL)
           return 0;
     if(frd==1)
     {
           if(newnode->dir!=NULL)
           {
                 printf("directory not empty\n");
                 return 0;
           }   
     }  
     if((newnode->left==NULL)&&(newnode->rigth==NULL))
     {
           p=newnode->headir;
           p->dir=NULL;
           free(newnode);
     }  
     else if(newnode->right==NULL)
     {
           p=newnode->left;
           p->right=NULL;
           free(newnode);
     }  
     else if(newnode->left==NULL)
     {
           p=newnode->headdir;
           p->dir=newnode->right;
           free(newnode);
     }   
     else
     {
           p=newnode->left;
           p->right=newnode->right;
           (newnode->right)->left=p;
           free(newnode);
     }   
     return 1;
}   

void main()
{
     char src[50];
     int s_done=0,ch;
     NODE root,newnode;
     root=(NODE)malloc(sizeof(struct file));
     root->left=root->right=NULL;
     root->dir=root->headdir=NULL;
     root->isdir=1;
     printf("enter the name of root directory\n");
     gets(root->name);
     printf("root directory created\n");
     while(1)
     {
          printf("MENU\n1.create file\n2.create dir\n3.delete file\n4.delete dir\n5.seacrch a file/dir\n6.exit");
          printf("eneter your choice\n");
          scanf("%d",&ch);
          switch(ch)
          {
               case 1: vlaue=add(0,root);
                       if(value==0)
                            printf("specified directory not found\n");
                       else
                            printf("file created\n");
                       break;
               case 2: value=add(1,root);  
                       if(value==0)
                             printf("specifiled directory not found\n");
                       else
                             printf("directory created\n");
                       break;
               case 3: value=del(0,root);
                       if(value==0)
                             printf("file does not exist\n");
                       else
                             printf("file deleted\n");
                       break;
               case 4: value=del(1,root);
                       if(value==0)
                             printf("can not delete this directory\n");
                       else
                             printf("directory deleted\n");
                       break;
               case 5: printf("enter the name of the file/dir\n");
                       geta(src);
                       newnode=search(root,src,root,&s_done);
                       newnode=ele;
                       if(newnode->name==src)
                               printf("%s is present\n",src);
                       else
                       {
                             printf("%s not found\n",src);
                             break;
                       }
                       path(ele);
                       break;
               case 6: getch();
                       exit(0);
              default: printf("invalid choice\n");   
          }  
     }  
}   
   
