#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int INF = 0xFFFFFFFF;

class Num{
public:
	int a;
	int b;
public:
	Num(){ a = INF;b = INF;
	}
};
Num num[201];
int f[201][201];
int n,m;

bool cmp(const Num & A,const Num & B)
{
	return A.b > B.b;
}

int main()
{
	cin >> n >> m;
	for(int i =1;i<=n;i++)
		cin >> num[i].a;
	for(int i =1;i<=n;i++)
		cin >> num[i].b;
	sort(num+1,num+n+1,cmp);
	for(int j =1;j<=m;j++)
	{
		for(int i =1;i<=n;i++)
		{
			f[i][j] = max(f[i-1][j],f[i-1][j-1]+num[i].a-num[i].b*(j-1));
		}
	}
	cout << f[n][m] << endl;
}

