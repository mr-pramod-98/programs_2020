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
      if(ard==0)
      {
          printf("enter the name of");
      } 
     } 
} 
