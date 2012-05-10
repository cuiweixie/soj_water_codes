#include <iostream>
#include <cmath>
using namespace std;

int num_sum(int n)
{
	int temp=0;
	while(n!=0)
	{
		temp+= n%10;
		n=n/10;
	}
    return temp;
}
int generator(int n)
{
	int i = n -9*((int)log((double)n)+1);int num=n;
	for (;i<n;i++)
	{
	    if(i+num_sum(i)==n) return i;
	}
	return 0;
}

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int num;
		cin >> num;
		cout << generator(num) << endl;
	}
}