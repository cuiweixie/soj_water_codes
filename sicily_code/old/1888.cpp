#include <iostream>
#include <algorithm>
using namespace std;
long long int sum[100010];
long long int pmax,pmin,asc,desc,ans1,ans2;
int n;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	cin >> n;
    pmax=0;
	pmin=0;
	asc=-10000;
	desc=0;
	sum[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin >> sum[i];
		sum[i]=sum[i]+sum[i-1];
		if(asc<sum[i]-pmin)
		{
			asc=sum[i]-pmin;
		}
		if(desc>sum[i]-pmax)
		{
			desc=sum[i]-pmax;
		}
		if(pmax<sum[i])
			pmax=sum[i];
		if(pmin>sum[i])
			pmin=sum[i];
	}
	ans1=asc;
	if(desc==sum[n])
	{
		ans2=ans1-1;
	}
	else
	{
		ans2=sum[n]-desc;
	}
	cout << max(ans1,ans2)<<endl;
	}
}

