/*
 * =====================================================================================
 *
 *       Filename:  twostack.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年04月20日 16时04分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Xie (), cuiweixie@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#define N 1001
int head[N],nxt[N*N],vv[N*N],cc,a[N],n;
int sa[N],sb[N],spa,spb,in_i;
char op[N*N];int opi;
int ok=1;
int mmin[N],color[N];
void add_edge(int i ,int j)
{
	nxt[cc]=head[i];
	head[i]=cc;
	vv[cc]=j;
	cc++;
}
void init()
{
	memset(head,-1,sizeof(head));
	cc=0;
	memset(color,-1,sizeof(head));
	spa=spb=0;
	in_i=1;
	opi=0;
	ok=1;
  mmin[n]=a[n];
	int i;
	for(i=n-1;i>=1;i--)
		mmin[i]=mmin[i+1]>a[i]?a[i]:mmin[i+1];
}
int check(int i,int j)
{
 if(a[i]>a[j]) return 0;
 return mmin[j+1]<a[i];
}
void build_graph()
{	
	int i=1,j=2;
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n-1;j++)
		{
      if(check(i,j))
			{
				add_edge(i,j);
				add_edge(j,i);
			}
		}
}
void dfs(int i)
{
	if(color[i]==-1)
	{
		color[i]=0;
	}
	int j;
	for(j=head[i];j!=-1;j=nxt[j])
	{
		int v=vv[j];
		if(color[v]==-1)
		{
      color[v]=1-color[i]; 
			dfs(v);
		}
		else
		{
			if(color[i]==color[v])
			{
				ok=0;
				return;
			}
		}
	}
}
void push(int in_i)
{
  if(color[in_i]==0)
	{
		op[opi++]='a';
		sa[spa++]=a[in_i];
	}
	else
	{
		op[opi++]='c';
		sb[spb++]=a[in_i];
	}
}
int pop(int val)
{
	if(spa!=0&&sa[spa-1]==val)
	{
		op[opi++]='b';
		spa--;
		return 1;
	}
	if(spb!=0&&sb[spb-1]==val)
	{
		op[opi++]='d';
		spb--;
		return 1;
	}
	return 0;
}
void print()
{
	int i=1;
	for(i=1;i<=n;i++)
	{
		while(!pop(i))
			push(in_i++);
	}
	printf("%c",op[0]);
	for(i=1;i<opi;i++)
		printf(" %c",op[i]);
	printf("\n");
}
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		int i;
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);
		init();
		build_graph();
	  for(i=1;i<=n;i++)
			if(color[i]==-1)
				dfs(i);
		if(ok)
			print();
		else
			printf("0\n");
	}
	return 0;
}
