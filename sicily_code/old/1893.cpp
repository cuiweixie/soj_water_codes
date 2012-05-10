#include <iostream>
using namespace std;


int main()
{
	long long int n;
	while(cin >> n&&n!=0)
	{
		long long int ans =1;
	for(int i=1;i<=n;i++)
	  ans=ans*(2*n-i+1)/i;
	cout << ans/(n+1) << endl;
	}
}