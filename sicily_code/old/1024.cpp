#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int N,K;
struct Edge{
	int u,v,d;
	Edge(int uu,int vv,int dd):u(uu),v(vv),d(dd){}
};
int _max,u,v,d;
bool vis[10010];
vector<Edge> E[10010];
void dfs(int u,int dis)
{
	if(dis > _max ) _max = dis;
	vis[u] = 1;
	for(int i=0;i<E[u].size();i++)
	{
		int v = E[u][i].v;
		int d = E[u][i].d;
		if(vis[v]) continue;
		dfs(v,dis +d);
	}
}

int main()
{
	while(cin >> N >> K)
	{
		_max=0;
		memset(E,0,sizeof(E));
		memset(vis,0,sizeof(vis));
		for(int i=1;i<N;i++)
		{
			cin >> u >> v >> d;
			E[u].push_back (Edge(u,v,d));
			E[v].push_back(Edge(v,u,d));
		}
			dfs(K,0);
			cout << _max << endl;
		}
}


