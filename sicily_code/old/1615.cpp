#include <iostream>
#include <algorithm>
using namespace std;
int t,n,a[100];
void fix(int i)
{
	for( ;i>=1;i--)
	{
		if(a[i]==a[i-1]+1)
		{
			int temp = a[i];
			a[i]=a[i-1];
			a[i-1]=temp;
		}
		else 
			break;
	}
}
int main()
{
	freopen("in.txt","r",stdin);
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i=0;i<n;i++)cin >> a[i];
		sort(a,a+n);
		for(int i=n-1;i>=0;i--)
			fix(i);
		for(int i=0;i<n;i++)cout << a[i]<<" ";
		cout << endl;
	}
}
