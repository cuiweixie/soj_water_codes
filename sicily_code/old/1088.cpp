#include <iostream>
#include <algorithm>
using namespace std;
struct Cow{
	int s,e;
	int i;
	int n;
	int len;
}cow[100001];
bool cmp(Cow a,Cow b)
{
	return a.len<b.len;
}
bool stronger(Cow a, Cow b)
{
	return a.e>=b.e&&a.s<=b.s&&a.e-a.s>b.e-b.s;
}

int ans[100001],n;
int main()
{
	while(cin >> n)
	{
		if(n==0) return 0;
		for(int i=1;i<=n;i++)
		{
			cin >> cow[i].s>>cow[i].e;
			cow[i].i=i;
			cow[i].n=0;
			cow[i].len=cow[i].e-cow[i].s;
		}
		sort(cow+1,cow+n+1,cmp);
		for(int i=1;i<=n;i++)
		{
			
		}
		for(int i=1;i<=n;i++) ans[cow[i].i]=cow[i].n;
		for(int i=1;i<=n;i++) cout << ans[i]<<endl;
	}
}