#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int n,m;
int a[100];
int main()
{
	freopen("in.txt","r",stdin);
	while(cin >> n&&n!=0)
	{
		priority_queue<int> pri_que;
		int t;
		for(int i=1;i<=n;i++)
		{
			cin >> t;
			pri_que.push(t);
		}
		cin >> m;
		int count=0;
		while(pri_que.size()>=m)
		{
			for(int i=0;i<m;i++)
			{
				a[i]=pri_que.top();
				pri_que.pop();
			}
			count+=a[m-1];
			for(int i=0;i<m;i++)
				if(a[i]-a[m-1]>0)
				pri_que.push(a[i]-a[m-1]);
	}
		cout << count << endl;
		while(!pri_que.empty())pri_que.pop();
	}
}
	
