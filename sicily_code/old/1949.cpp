#include <iostream>
#include <cmath>
#include <cstring>
#include <stdio.h>
using namespace std;
int set[100010];
int maxx[100010][20],minn[100010][20];
bool ok;
int n,m,s,e,k;
void RMQ()
{
	for(int j=1;(1<<j)<=n;j++)
		for(int i=2;i+(1<<j)-1<=n;i++)
		{
			maxx[i][j]=max(maxx[i][j-1],maxx[i+(1<<(j-1))][j-1]);
			minn[i][j]=min(minn[i][j-1],minn[i+(1<<(j-1))][j-1]);
		}
}
int _max(int st,int ed)  
{  
    int k = (int)(log((double)(ed - st + 1))/log(2.0));  
    return max(maxx[st][k],maxx[ed-(1<<k)+1][k]);  
}  
int _min(int st,int ed)  
{  
    int k = (int)(log((double)(ed - st + 1))/log(2.0));  
    return min(minn[st][k],minn[ed-(1<<k)+1][k]);  
}  

int find(int i)
{
	int t=i;
	while(set[i]!=i)
		i=set[i];
	set[t]=i;
	return i;
}
void set_union(int u,int v)
{
	u=find(u),v=find(v);
	if(u!=v) set[u]=v;
}

int main()
{
	int caseN=0;bool first=1;
	while(cin >>n)
	{
		if(!first)printf("\n");for(int i = 1;i <= n;++i)   set[i] = i;  
		first=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&maxx[i][0]);
			minn[i][0]=maxx[i][0];
		}
		RMQ();printf("Case %d\n",++caseN);  

		cin >> m;
		while(m--)
		{
			scanf("%d%d",&s,&e);
			int u=_max(s,e),v=_min(s,e);
			set_union(u,v);
		}

		cin >>k;
		while(k--)
		{
			int s,e;scanf("%d%d",&s,&e);
			if(find(s)==find(e))
				printf("YES\n");
			else 
				printf("NO\n");
		}
	}
}
