#include <stdio.h>
#include <string.h>
#define N 10000
int pattern[2*N],text[2*N];
int pn,tn;
int next[2*N];
void print(int p[],int n);
void get_next(int pattern[],int pn,int next[])
{
	int j=1,k=0;
	next[0]=-1,next[1]=0;
	while(j<pn-1)
	{
		if(pattern[j]==pattern[k])
		{
			next[j+1]=k+1;
			j++,k++;
		}
		else if(k==0)
		{
			next[j+1]=0;
			j++;
		}
		else
			k=next[k];
	}
}
int  kmp(int pattern[],int pn,int next[],int text[],int tn)
{
	get_next(pattern,pn,next);
	int pi=0,ti=0;
	while(pi<pn&&ti<tn)
	{
		if(pattern[pi]==text[ti])
			pi++,ti++;
		else if(pi==0)
			ti++;
		else 
			pi=next[pi];
	}
	 if(pi>=pn)
	 {
		 if(ti==tn) return 1;
		 return text[ti]==0;
	 }
	 return 0;
}
int tree_node[N];
int head[N],vv[N],nxt[N],n;
int cc;
int path_i;
void add_edge(int i,int j)
{
	nxt[cc]=head[i];
	head[i]=cc;
	vv[cc]=j;
	cc++;
}
void init_graph()
{
	memset(head,-1,sizeof(head));
	memset(tree_node,-1,sizeof(tree_node));
	cc=0;
	path_i=0;
}
void dfs_pattern(int i)
{
	int j;
	for(j=head[i];j!=-1;j=nxt[j])
	{
	  pattern[path_i++]=1;
		dfs_pattern(vv[j]);
		pattern[path_i++]=0;
	}
}
void dfs_text(int i)
{
	int j;
	for(j=head[i];j!=-1;j=nxt[j])
	{
	  text[path_i++]=1;
		dfs_text(vv[j]);
	  text[path_i++]=0;
	}
}
void get_pattern()
{
	init_graph();
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		int k,v;
		for(k=0;k<j;k++)
		{
			scanf("%d",&v);
			add_edge(i,v);
			tree_node[v]=i;
		}
	}
	int root;
	for(root=0;root<n;root++)
		if(tree_node[root]==-1)break;
	dfs_pattern(root);
	pn=path_i;
}
void print(int p[],int n)
{
	int i;
	printf("number: %d\n",n);
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
}
void get_text()
{
	init_graph();
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		int k,v;
		for(k=0;k<j;k++)
		{
			scanf("%d",&v);
			add_edge(i,v);
			tree_node[v]=i;
		}
	}
	int root;
	for(root=0;root<n;root++)
		if(tree_node[root]==-1)break;
	dfs_text(root);
	tn=path_i;
}
void deal_one_case()
{
	get_text();
	get_pattern();
	if(kmp(pattern,pn,next,text,tn))
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		deal_one_case();
	}
	return 0;
}
