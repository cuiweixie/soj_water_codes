#include <iostream>
using namespace std;
int n;
int mmax,mmin;

int main()
{
	int test;
	cin >>test;
	while(test--)
	{
		cin >>n;
		mmin = 100000;mmax = 0; int temp;
		for(int i=0;i<n;i++)
		{
			cin >> temp;
			if(temp >=mmax)
			{
				mmax = temp;
			}

				if(mmin >= temp)
					mmin = temp;
		}
		int ans = (mmax - mmin)*2;
		cout << ans << endl;
	}
}
