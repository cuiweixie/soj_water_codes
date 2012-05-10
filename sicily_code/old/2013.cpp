#include <iostream>
using namespace std;
int a[100000];
int n;
int main()
{
	cin >> n;
	int ans=n;
	for(int i=0;i<n;i++)cin >> a[i];
	for(int i=1;i<n;i++)a[i]=a[i]+a[i-1];
	bool back=0;
	int b=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0&&back)
		{
			ans+=2*(i-b);
			back=0;
		}
		if(a[i]<0&&back==0)
		{
			back=1;
			b=i;
		}
	}

	cout << ans << endl;
}
