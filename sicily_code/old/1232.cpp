#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int k;
		cin >> k;
		int p,sum(0);
		for(int i=0;i<k;i++)
		{
			cin >> p;
			sum+=p;
		}
		cout << sum-k+1 << endl;
	}
}
