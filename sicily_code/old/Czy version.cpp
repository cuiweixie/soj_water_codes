#include <iostream>
#include <cstring>
using namespace std;

int vis[1000001];
int next[1000001];

int n,ans,ringID,p;

void search()
{
	for(int i=1;i<=n;i++)
	{
		if(vis[i] == 0)
		{
			p = i;
			ringID++;
			while(vis[p] == 0)
			{
				vis[p] = ringID;
				p = next[p];
				if(vis[p] == ringID)
					ans++;
			}
		}
	}
}

int main()
{
	while(cin >> n)
	{   ans =0;ringID=1;
	    memset(vis,0,sizeof(vis));
		for(int i =1;i<=n;i++)
		{
			cin>>next[i];
			if(next[i] == i)
			{
				
				vis[i] = ringID;
				ringID++;
				ans++;
			}
		}
		search();
		cout <<ans << endl;
	}
}