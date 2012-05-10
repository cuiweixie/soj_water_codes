#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int h,w;
int f[510][510];
int main()
{
	cin >> h >> w;
	memset(f,0,sizeof(f));
	for(int i=1;i<=h;i++)
		for(int j=1;j<=w;j++)
		{
			cin >> f[i][j];
		}
	for(int i=2;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
		{
			f[i][j]=max(max(f[i-1][j-1],f[i-1][j]),max(f[i-1][j],f[i-1][j+1]))+f[i][j];
		}
	}
	int maxx = -1;
	for(int i=1;i<=w;i++)
		if(f[h][i]>maxx)maxx=f[h][i];
	cout << maxx <<endl;
}