#include <iostream>
#include <cstdio>
using namespace std;
const int N = 500010;
int L[N],R[N];
int n,m;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		scanf("%d%d",&m,&n);
		for(int i=0;i<=n;i++)
		{
			L[i]=i-1;
			R[i]=i+1;
		}
		int cmd ,x,y;
		while(m--)
		{
			 scanf("%d%d%d", &cmd, &x, &y);
			R[L[x]]=R[x];
			L[R[x]]=L[x];
			if(cmd==1)
			{
			   R[L[y]]=x;
			   L[x] = L[y];
			   R[x] = y;
			   L[y]=x;
			}
			else
			{
				L[R[y]]=x;
				L[x] =y;
				R[x]= R[y];
				R[y]=x;
			}
		}
		int i=R[0];
		while(i!=n+1)
		{
			printf("%d ",i);
			i=R[i];
		}
		printf("\n");
	}
}


