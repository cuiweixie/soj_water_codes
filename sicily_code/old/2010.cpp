#include <iostream>
using namespace std;

int a[10];
int num;
bool is_H_Num(int n)
{
	int len=0;
	while(n!=0)
	{
		a[len]=n%10;
		n/=10;
		len++;
	}
	for(int i=1;i<len-1;i++)
	{
		if(a[i]!=a[i-1]+a[i+1]&&a[i]!=a[i-1]-a[i+1]&&a[i]!=a[i+1]-a[i-1])
			return false;
	}
	return true;
}
int main()
{
	cin >> num;
	int ans=0;
	for(int i=1;i<=num;i++)
		if(is_H_Num(i))ans++;
	cout << ans << endl;
}


	