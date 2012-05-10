#include <iostream>
#include <cstring>
using namespace std;
int f[1000][10000],n,m,t;
int knap[1000];
int main()
{
	//freopen("in.txt","r",stdin);
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		memset(f,0,sizeof(f));
		for(int i=1;i<=n;i++)
		{
			cin >> knap[i];
		}
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
			{
				if(j-knap[i]>=0)
					f[i][j]=max(f[i-1][j],f[i-1][j-knap[i]]+knap[i]);
				else
					f[i][j]=f[i-1][j];
			}
		cout <<f[n][m] <<endl;
	}
}