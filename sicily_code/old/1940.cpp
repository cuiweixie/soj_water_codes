#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstring>
using namespace std;
set<int> s;
vector<int> task[100001];
int n,m,t;
int indegree[100001];
int main()
{
	freopen("in.txt","r",stdin);
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		memset(indegree,0,sizeof(indegree));
		for(int i=1;i<=n;i++)task[i].clear();
		while(m--)
		{
			int x,y;
			cin >> x >> y;
			indegree[y]++;
			task[x].push_back(y);
		}
		for(int i=1;i<=n;i++)if(indegree[i]==0)s.insert(i);
		while(!s.empty())
		{
			int out=*s.begin();
			s.erase(s.begin());
			for(int i=0;i<task[out].size();i++)
			{
				indegree[task[out][i]]--;
				if(indegree[task[out][i]]==0)
					s.insert(task[out][i]);
			}
		  cout << out <<" ";
		}
		cout << endl;
	}
}