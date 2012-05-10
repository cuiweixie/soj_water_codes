#include <iostream>
using namespace std;

int n,result;
int main()
{
	cin >> n;
	result=1;
	for(int i=1;i<=n-2;i++)
	{
		result*=n;
		result%=10007;
	}
	for(int i=2;i<=n-1;i++)
	{
		result*=i;
		result%=10007;
	}
	cout << result << endl;
}
