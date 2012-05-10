#include <iostream>
#include <cstring>
using namespace std;
int T,n,m;
int graph[201][201];
bool state[201];
int wt[201];
const int Max=10000000;
int main()
{
	freopen("in.txt","r",stdin);
	cin>>T;
	while(T--)
	{
		memset(graph,0x4f,sizeof(graph));
		cin>>n>>m;
		while(m--)
		{
			int i,j,k;
			cin >> i >>j >>k;
			if(graph[i][j]>k)
			graph[i][j]=graph[j][i]=k;
		}
		memset(state,0,sizeof(state));
		memset(wt,0x4f,sizeof(wt));
		wt[1]=0,state[1]=0;
		for(int i=1;i<=n;i++)
		{
		    int choose=0,w=Max;
			for(int i=1;i<=n;i++)
			{
				if(state[i]==0&&wt[i]<w)
				{
					choose=i,w=wt[i];
				}
			}
			state[choose]=1,wt[choose]=w;
			for(int i=1;i<=n;i++)
			{
				if(state[i]==0&&wt[choose]+graph[choose][i]<wt[i])
					wt[i]=wt[choose]+graph[choose][i];
			}
		}
	   if(wt[n]<Max)cout <<wt[n]<<endl;
	   else
		   cout <<-1 <<endl;
	}
}