#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int f[100500];
int cash;
int n[20],d[20];
void CompletePack(int v)
{
	for(int i=v;i<=cash;i++)
		f[i]=max(f[i],f[i-v]+v);
}
void ZeroOnePack(int v)
{
	for(int i=cash;i>=v;i--)
		f[i]=max(f[i],f[i-v]+v);
}
void MultiplePack(int v,int num)
{
	int k;
	if(v*num>=cash)
		CompletePack(v);
	else
	{
		k=num;
		for(int i=1;i<=k;i*=2)
		{
			ZeroOnePack(v*i);
			k-=i;
		}

	ZeroOnePack(v*k);
		}
}

int main()
{
	int kinds;
	while(cin >> cash)
	{
	  cin >> kinds;
	  
	  memset(f,0,sizeof(f));
	  for(int i=0;i<kinds;i++)cin >> n[i]>>d[i];
	  for(int i=0;i<kinds;i++)
	  {
		  MultiplePack(d[i],n[i]);
	  }
	  cout << f[cash] << endl;
	}
}

