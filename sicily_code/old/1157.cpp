#include <iostream>
using namespace std;
long int max(long int a,long int b)
{
	return (a > b)? a: b;
}


int main()
{
	int n;
	while(cin >> n)
	{
		if(n == 0) return 0;
		long int a[4];
		if(n == 1)
		{
			cin >> a[0];
			cout << a[0]<<endl;
		}
		if(n == 2)
		{
			cin >> a[0] >> a[1];
			cout << max(a[0],a[1]) << endl;
		}
		if(n == 3)
		{
			cin >> a[0] >> a[1] >> a[2];
			cout << max(max(a[0],a[1]),a[2]) << endl;
		}
        if(n == 4)
		{
			cin >> a[0] >> a[1] >> a[2] >> a[3];
			cout << max(max(a[0],a[1]),max(a[2],a[3])) << endl;
		}
	}
}

