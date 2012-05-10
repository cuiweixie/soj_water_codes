#include <iostream>
using namespace std;

int degree[22];
int n,m;
int main()
{
	while(cin >> n >> m)
	{
		if(n==0&&m==0)return 0;
		int a, b;
		for(int i=1;i<=n;i++)degree[i]=0;
		while(m--)
		{
			cin >> a >> b;
			degree[a]++;
			degree[b]++;
		}
		int ans = 0;
		for(int i=1;i<=n;i++)
			if(degree[i]>ans)ans=degree[i];
		cout << ans << endl;
	}
}