#include <stdio.h>
#include <stdlib.h>
struct node {
	struct node *left,*right;
	char value;
};
#define N 1000
char pre[N],in[N];
struct node *root;
void *new_node(char val)
{
  struct node *p=malloc(sizeof(struct node));
	p->value=val;
	p->left=p->right=NULL;
	return p;
}
void build(struct node **root,int ii,int ij,int pi,int pj)
{
	int i;
	if(ii>ij)return;
	for(i=ii;i<=ij;i++)
	{
		if(in[i]==pre[pi])
			break;
	}
  *root=new_node(pre[pi]);
 // build left
 build(&(*root)->left,ii,i-1,pi+1,pi+1+i-1-ii);
 build(&(*root)->right,i+1,ij,pi+i-ii+1,pj);
}
void free_tree(struct node **root)
{
	if((*root)->left!=NULL)free_tree(&(*root)->left);
	if((*root)->right!=NULL)free_tree(&(*root)->right);
	free(*root);
}
struct node* que[1000];
void print(struct node *root)
{
	int i=0,j=1;
	que[i]=root;
	while(i<j)
	{
   printf("%c",que[i]->value); 
	 if(que[i]->left!=NULL)
	 que[j++]=que[i]->left;
	 if(que[i]->right!=NULL)
	 que[j++]=que[i]->right;
	 i++;
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n=0;
		char ch;
	  scanf("%c",&ch);
		while(1)
		{
			scanf("%c",&ch);
			if(ch==' ')
				break;
			else
				pre[n++]=ch;
		}
		int i;
		for(i=0;i<n;i++)
			scanf("%c",&in[i]);
		build(&root,0,n-1,0,n-1);
		print(root);
		printf("\n");
		free_tree(&root);
	}
	return 0;
}
