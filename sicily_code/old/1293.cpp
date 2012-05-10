#include <iostream>
#include <cstring>
using namespace std;
int count[10001];
int cal(int n)
{
	if(n==1) return 1;
	if(n%2==0) 
	{
		if(n/2<=10000&&count[n/2]!=0)return 1+count[n/2];
		else return 1+cal(n/2);
	}
	else
	{
		return 1+cal(3*n+1);
	}
}
void done()
{
	memset(count,0,sizeof(count));
	count[1] = 1;
	for(int i=2;i<=10000;i++)
	{
		if(count[i]==0)
		{
		count[i] = cal(i);
		if(i%2!=0&&3*i+1<=10000)
			count[3*i+1] = count[i]-1;
		}
	}
}
int find_max(int i,int j)
{
	int max =count[i++];
	for(;i<=j;i++)
		if(count[i] > max)max = count[i];
    return max;
}

int main()
{
	done();
	int i,j;
	cin >> i >> j;
	cout << find_max(i,j) << endl;
}
