#include <iostream>
#include <iomanip>
using namespace std;
struct Node{
	bool vis;
	double dis;
	Node(bool d=0,double di=1):vis(d),dis(di){}
}node[101];
double graph[101][101];
int N,A,B;
double dijkstra()
{
	double Min;
	int k;
	for(int i=1;i<=N;i++)node[i].vis=0;
	node[A].dis=1;node[A].vis=true;
	for(int i=1;i<=N;i++)
		node[i].dis=node[A].dis*(1-graph[A][i]);
	for(int t=1;t<=N-1;t++)
	{
		Min =-100000000;
		for(int i=1;i<=N;i++)
			if(!node[i].vis&&node[i].dis>Min)
			{
				Min = node[i].dis; k=i;
			}
			node[k].vis=1;
			for(int i=1;i<=N;i++)
				if(!node[i].vis&&node[i].dis<node[k].dis*(1-graph[k][i]))
					node[i].dis=node[k].dis*(1-graph[k][i]);
	}
			return node[B].dis;

}


	
int main()
{
	int t;cin >> t;
	while(t--)
	{
		cin >> N>>A>>B;
		for(int i=1;i<=N;i++)
			for(int j=1;j<=N;j++)
				cin >> graph[i][j];
		cout <<fixed<<setprecision(2)<<dijkstra()<<endl;
	}
}