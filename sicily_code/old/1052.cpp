#include <iostream>
using namespace std;
int candy[1000];
int n;
int count;
void fix()
{
	for(int i=0;i<n;i++)
	if(candy[i]%2==1) candy[i]++;
}
void give()
{
	for(int i=0;i<n;i++)candy[i] = candy[i]>>1;
	int temp = candy[n-1];
	for(int i=n-1;i>=1;i--)
	{
		candy[i] += candy[i-1];
	}
	candy[0]+=temp;
}
bool same()
{
	for(int i=1;i<n;i++)
		if(candy[i]!=candy[i-1])return false;
	return true;
}

int main()
{
	while(cin >> n)
	{
		if(n==0) return 0;
		for(int i=0;i<n;i++)
			cin >> candy[i];
		count=0;
		while(!same())
		{
			give();
			fix();
			count++;
		}
		cout <<count <<" "<< candy[0] << endl;
	}
}