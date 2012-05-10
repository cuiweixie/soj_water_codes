#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <stdlib.h>
#include <string>
#include <cstring>
using namespace std;
int graph[101][101];
map<string,int> locToNum;
string locS[101];
string locE[101];
int length[101];
string start,des;
int dijkstra(int beg,int end,int n);
int N;
struct Node{
	int index;int wt;
	Node(int i=0,int w=0x0FFFFFFF):index(i),wt(w){}
};
int findMin(deque<int> &Q);

int main()
{
	int cases;
	cin >> cases;
	while(cases--)
	{
		memset(graph,0,sizeof(graph));
		int tag = 1;
		locToNum.clear();
		cin >> N;

	    for(int i=0;i<N;i++)
		{
			cin >> locS[i] >> locE[i]>>length[i];
		}
		cin >> start >> des;
		for(int i=0;i<N;i++)
		{
			if(locToNum.find(locS[i])== locToNum.end())
			{
				locToNum.insert(pair<string,int>(locS[i],tag));
				tag++;
			}
			if(locToNum.find(locE[i])==locToNum.end())
			{
			   locToNum.insert(pair<string,int>(locE[i],tag));
			   tag++;
			   }
			int x = locToNum[locS[i]],y = locToNum[locE[i]];
			graph[x][y] = graph[y][x]=length[i];
		}

			int n = locToNum.size();
		int beg = locToNum[start],dest = locToNum[des];
		if(beg==dest)cout <<"0"<<endl;
		else
		{
			int p=dijkstra(beg,dest,n);if(p==100000000) p=-1;
		cout<< p<<endl;
		}
	}
}
int dijkstra(int beg,int end,int n)
{
	bool get[101];
	memset(get,0,sizeof(get));
	get[beg]=1;
	int len[101];
	for(int i=1;i<=n;i++)len[i]=100000000;
	for(int i=1;i<n;i++)
	{
		int choose=0,minn=100000000000;
		for(int j=1;j<=n;j++)
		{
			if(get[j]==0&&len[j]<minn)
			{
				choose =j;
				minn=len[j];
			}
		}
		if(choose==end) return len[end];
		for(int j=1;j<=n;j++)
		{
			if(get[j]==0&&graph[choose][j]!=0&&len[j]>len[choose]+graph[choose][j])
				len[j]=graph[beg][choose]+graph[choose][j];
		}
	}
}






		

	
	
	 


	



