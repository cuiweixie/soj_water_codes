#include <iostream>
#include <algorithm>
using namespace std;
int a[1000],ans[1000],n,maxx;
int main()
{
	while(cin >> n&&n!=0)
	{
		for(int i=0;i<n;i++){ cin>>a[i];ans[i]=1;}
		ans[0]=1;
		for(int i=1;i<n;i++)
		{	int M=0;
		    for(int j=i-1;j>=0;j--)
			{
			
				if(ans[j]%2==1&&a[j]>a[i])
				M=max(M,ans[j]);
				if(ans[j]%2==0&&a[j]<a[i])
					M=max(M,ans[j]);
			}
			ans[i]=M+1;
		}
		cout << ans[n-1]<<endl;
	}
}

