#include <iostream>
using namespace std;

struct coup{
	int p,r;
};

int main()
{
	int n;
	while(cin >> n)
	{
		coup c[1000];
		if(n == 0) return 0;
		int a,b;
		for(int i=0;i < n;i++)
		{
			cin>> a >> b;
			c[i].p = a + b;
			c[i].r = (a > b)?a-b:b-a;
		}
		for(int i=0;i < n;++i)
		{
			for(int j = i+1;j < n; ++j)
			{
				int d = c[i].p > c[j].p? c[i].p >-c[j].p: c[j].p - c[i].p;
                int s = c[i].r > c[j].r? c[i].r >-c[j].r: c[j].r - c[i].r;
				if( s< d&& d < c[i].r + c[j].r)
				{
					cout << "No" << endl; goto out;
				}
			}
		}
		cout << "Yes" << endl;
out:;
	}
}
				