#include <iostream>
using namespace std;
int a[200],times[200],count;
int n;
int main()
{
	int t;cin >> t;
	while(t--)
	{
		cin >> n;
		count=0;
		for(int i=0;i<200;i++) times[i]=0;
		int ans=1;
		while(n!=1)
		{
			for(int i=2;i<=n;i++)
			{
				if(n%i==0)
				{
					a[count]=i;
				    n/=i;
					while(n%i==0)
					{
					times[count]++;
					n/=i;
					ans*=i;
					}
					count++;break;
				}
			}
		}
		cout << ans << endl;
	}
}
		
						

