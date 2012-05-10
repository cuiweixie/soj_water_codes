#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int p)
{
	if(p == 2) return true;
	if(p %2 == 0) return false;
	for(unsigned int i = 3; i <= (unsigned int)sqrt((double)(p));i+=2)
	{
		if(p %i == 0)
			return false;
	}
	return true;
}

int main()
{
	int k;
	while(cin >> k)
	{
		if(k == 0) return 0;	
		if(isPrime(k)) cout << "0" << endl;
		else
		{
			int l,r;
			for(int i = k - 1; i >= 3;i--)
			{
				if(isPrime(i))
				{
					l = i;
					goto ou;
				}
			}
ou:;


				for(int i = k + 1; ;i++)
			{
				if(isPrime(i))
				{
					r = i;
					goto out;
				}
			}
                out:;
				cout << r - l << endl;
		}
	}
}