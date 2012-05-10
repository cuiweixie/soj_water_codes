/*
 * =====================================================================================
 *
 *       Filename:  1326.c
 *
 *    Description:  apple tree
 *
 *        Version:  1.0
 *        Created:  2012年04月20日 20时55分08秒
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
#define N 2000
struct node{
	int p,e_i,l_i;
}node[N];
int n_i;
char str[N*2];
int a,b;
int a_n_i,b_n_i;
int map[2*N];
int get_next(int state,char ch,int i)
{
	if(ch=='0')
	{
		n_i++;
		node[n_i].p=state;
		node[n_i].e_i=i;
		map[i]=n_i;
		return n_i;
	}
	else
	{
		node[state].l_i=i;
		map[i]=state;
		return node[state].p;
	}
}
int node_path_tag[N];
int get_ca_i()
{
	memset(node_path_tag,-1,sizeof(node_path_tag));
	if(a_n_i==b_n_i) return a_n_i;
		node_path_tag[a_n_i]=0;
	while(node[a_n_i].p!=-1)
	{
		node_path_tag[a_n_i]=0;
		a_n_i=node[a_n_i].p;
	}
	while(node_path_tag[b_n_i]!=0)
	{
		b_n_i=node[b_n_i].p;
	}
	return b_n_i;
}
int main()
{
 int t,n;
 scanf("%d",&t);
 while(t--)
 {
	 scanf("%d",&n);
	 node[0].p=-1;
	 int i;
	 a--,b--;
	 int state=0;
	 char ch;
	 scanf("%c",&ch);
	 for(i=0;i<2*n;i++)
	 {
		 scanf("%c",&ch);
		 state=get_next(state,ch,i);
	 }
	 scanf("%d%d",&a,&b);
	 a_n_i=map[a],b_n_i=map[b];
	 int ca_i=get_ca_i();
	 printf("%d %d\n",node[ca_i].e_i+1,node[ca_i].l_i+1);
 }
 return 0;
}
