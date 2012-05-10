#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int f[501][501];
int s1[501],s2[501];
const int oo = 2147483647;
int n,m;
int main()
{
	int t;cin >> t;
	while(t--)
	{
		cin >> n>>m;
		for(int i=0;i<n;i++)
			cin >> s1[i];
		for(int i=0;i<m;i++)
			cin >> s2[i];
		sort(s1,s1+n);
		sort(s2,s2+m);
		memset(f,0,sizeof(f));
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				if(i==0)
					f[i][j]=abs(s1[i]-s2[j]);
				else
				{
					int hold = oo;
					for(int k=i-1;k<j;k++)
						hold=min(hold,f[i-1][k]);
					f[i][j] = hold+abs(s1[i]-s2[j]);
				}
			}
			int ans =oo;
			for(int i=n-1;i<m;i++)
				ans = min(ans,f[n-1][i]);
			cout << ans << endl;
	}
}