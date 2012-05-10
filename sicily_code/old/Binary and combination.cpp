#include <iostream>
#include <bitset>
using namespace std;

int n;
int a[100];
void done(int n,int k)
{
	bitset<64> bina;bina.set(n+1);
	for(long int i=0;i<10000000;i++)
	{
		bina=bitset<64>(i);
		if(bina.count()==k)
		{
			for(int i=1;i<=64;i++)
			{
				if(bina.test(i)) cout << a[i] << " ";
			}
			cout << endl;
		}
	}
}

int main()
{
	for(int i=1;i<100;i++)
		a[i] = i;
	int n,k;
	while(cin >> n>>k)
	{
		done(n,k);
	}
}
