#include <stdio.h>
#define N 10000
struct node{
	int d,bd,sib,p;
}node[N];
int n_i=0;
char chs[N];
int get_next(int state,char ch)
{
	if(state==-1) return 0;
	if(ch=='u')
	{
		int p=node[state].p;
		node[p].d=node[state].d+1>node[p].d?node[state].d+1:node[p].d;
	  int bd=node[state].bd+node[p].sib+1;
		node[p].bd=bd>node[p].bd?bd:node[p].bd;
		node[p].sib++;
		return p;
	}
	else{
		n_i++;
		node[n_i].d=node[n_i].bd=node[n_i].sib=0;
		node[n_i].p=state;
		return n_i;
	}
}
int main()
{
	int t=0;
	while(scanf("%s",chs))
	{
		if(chs[0]=='#')
			return 0;
		int i,state=0;
		n_i=0;
		node[0].d=node[0].bd=node[0].sib=0;
		node[0].p=-1;
		for(i=0;chs[i]!='\0';i++)
		{
			state=get_next(state,chs[i]);
		}
		t++;
		printf("Tree %d: %d => %d\n",t,node[0].d,node[0].bd);
	}
	return 0;
}
