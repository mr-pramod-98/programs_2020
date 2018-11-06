#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct file
{
 char name[50];
 int isdir;
 srtuct file *left,*right;
 struct flie *dir,*headdir;
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
