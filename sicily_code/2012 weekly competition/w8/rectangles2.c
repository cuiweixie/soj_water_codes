#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100000
#define M 900
struct rectangle{
    int x1,y1,x2,y2;
}node[N];
int head[N],nxt[N*M],vv[N*M];
int cc;
void add_edge(int u,int v)
{
    nxt[cc]=head[u];
    head[u]=cc;
    vv[cc]=v;
    cc++;
}
int longest[N];
int n;
int ccc;
#define D 10000
int dfs(int i,int depth)
{
	if(depth>=D){
		ccc=i;return -1;
	}
    if(longest[i]==-1)
    {
      int k;
        int ll=0;
        for(k=head[i];k!=-1;k=nxt[k])
        {
                int ret=dfs(vv[k],depth+1);
								if(ret==-1) return -1;
								ret++;
                ll=ll>ret?ll:ret;
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
int cmp2(const void *a,const void *b)
{
  int ret= (((struct rectangle*)a)->x1)-(((struct rectangle*)b)->x1);
	if(ret==0)
  return (((struct rectangle*)b)->y1)-(((struct rectangle*)b)->y1);
	return ret;
}

int main()
{
    while(scanf("%d",&n)&&n!=0)
    {
        memset(longest,-1,sizeof(longest));
        memset(nxt,-1,sizeof(nxt));
        memset(head,-1,sizeof(head));
        cc=0;
        int i;
        for(i=0;i<n;i++)
            scanf("%d%d%d%d",&node[i].x1,&node[i].y1,&node[i].x2,&node[i].y2);
        int j;
				qsort(node,n,sizeof(struct rectangle),cmp2);
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
            {
        if(i!=j&&cmp(&node[i],&node[j]))
				    {
                    add_edge(i,j);
										break;
						}
            }
        for(i=0;i<n;i++)
				{
        int ans=-1;
				ccc=i;
				int ss=1;
					while(ans==-1)
					{
					 ans=dfs(ccc,0);
					 if(ans==-1)ss=0;
					}
				}
        int mmax=-1;
        for(i=0;i<n;i++)
            mmax=longest[i]>mmax?longest[i]:mmax;
        printf("%d\n",mmax+1);
    }
    return 0;
}
