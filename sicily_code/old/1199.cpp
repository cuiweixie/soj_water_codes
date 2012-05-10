#include <iostream>
using namespace std;
long long int n,m;
long long int ans;
long long int eular(long long int n)
{
	long long int ret=1;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			n/=i;ret*=i-1;
		}
		while(n%i==0)
		{n/=i;ret*=i;}
	}
if(n>1)
	ret*=n-1;
return ret;
}
int main()
{
	int t;cin >> t;
	while(t--)
	{
		cin >> n >> m;
		ans=0;
		if(n>=m&&m!=0)
		for(long long int i=m;i<=n;i++)
		{
			if(n%i==0)ans+=eular(n/i);
		}
		if(m==0) ans=n;
		cout << ans << endl;
	}
}