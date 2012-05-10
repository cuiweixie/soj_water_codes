#include <stdio.h>
#include <string.h>
#define N 100000
struct rectangle{
	int x1,y1,x2,y2;
}node[N];
int graph[N][N];
int longest[N];
int n;
int dfs(int i)
{
	if(longest[i]==-1)
	{
	  int k;
		int ll=0;
		for(k=0;k<n;k++)
		{
			if(graph[i][k])
			{
				int ret=dfs(k)+1;
				ll=ll>ret?ll:ret;
			}
		}
		longest[i]=ll;
		return ll;
	}	
	else
		return longest[i];
}
int cmp(struct rectangle *a,struct rectangle *b)
{
	return a->x2<b->x1&&a->y2<b->y1;
}
int main()
{
	while(scanf("%d",&n)&&n!=0)
	{
		memset(longest,-1,sizeof(longest));
		memset(graph,0,sizeof(graph));
		int i;
		for(i=0;i<n;i++)
			scanf("%d%d%d%d",&node[i].x1,&node[i].y1,&node[i].x2,&node[i].y2);
		int j;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
        if(i!=j&&cmp(&node[i],&node[j]))
					graph[i][j]=1;
			}
		for(i=0;i<n;i++)
			dfs(i);
		int mmax=-1;
		for(i=0;i<n;i++)
			mmax=longest[i]>mmax?longest[i]:mmax;
		printf("%d\n",mmax+1);
	}
	return 0;
}
