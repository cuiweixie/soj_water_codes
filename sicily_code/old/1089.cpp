#include <iostream>
#include <cmath>
using namespace std;
long long int eula[1000001];
void getEula()
{
	eula[1]=1;eula[2]=1;eula[3]=2;
	for(int i=4;i<1000001;i++)
	{
		int n=i;int e=1;
		for(int j=2;j<=sqrt((double)n);j++)
		{
			if(n%j==0)
			{
				n/=j;e*=j-1;
				while(n%j==0)
					n/=j,e*=j;
				break;
			}
		}
		if(n==i)eula[i]=i-1;
		else
			eula[i]=e*eula[n];
	}
}
int main()
{
	getEula();
	int n;
	while(cin >> n&&n!=0)
	{
	long long int ans=0;
		for(int i=2;i<=n;i++)ans+=eula[i];
		cout << ans << endl;
	}
}
				
