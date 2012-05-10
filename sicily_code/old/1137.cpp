#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int n,k;
int d[30000],ans[30000];
bool in_range(int i,int j)
{
	if(i-j<=k)return true;
	else return false;
}
int main()
{
	memset(ans,0,sizeof(ans));
	cin >> n>>k;
	for(int i=0;i<n;i++)scanf("%d",&d[i]);
	for(int i=0;i<n;i++)
	{ int max ,min;
	   max=min=d[i];
		for(int j=i+1;j<n;j++)
		{
			if(d[j]>max)max=d[j];
			else if(d[j]<min) min=d[j];
			else;
			if(in_range(max,min))ans[i]++;
			else
				break;
		}
	}
    int max=0;
	for(int i=0;i<n;i++)
		if(ans[i]>max)max=ans[i];
      cout << max+1 << endl;
}
	
	