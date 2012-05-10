#include <iostream>
#include <cstring>
using namespace std;
const int Max = 1000000000;
int n,r;
int w[51][51];
bool in_mst[51];
int parent_in_mst[51];
int len_in_mst[51];
int extract_min()
{
	int index=-1,min=Max-1;
	for(int i=1;i<=n;i++)
		if(!in_mst[i]&&len_in_mst[i]<min)
		{
			index =i; min=len_in_mst[i];
		}
		return index;
}
void initialized()
{
	memset(in_mst,0,sizeof(in_mst));
	for(int i=1;i<51;i++)
	{
		len_in_mst[i]=Max;
		for(int j=1;j<51;j++)
			w[i][j] =Max;
	}
}

int main()
{
	while(cin >> n&&n!=0)
	{
		cin >> r;
		if(r==0)
			{
				cout <<"0"<<endl;
				continue;
		}
		initialized();
		int a,b,weight;
		for(int i=1;i<=r;i++)
		{
			cin >> a >> b >> weight;
			if(w[a][b] > weight)
			{
				w[a][b]=w[b][a] =weight;
			}
		}
		len_in_mst[1] =0;in_mst[1] = 1;
		int u=1;int ans=0;
			for(int v=1;v<=n;v++)
			{
				if(!in_mst[v]&&w[u][v]<len_in_mst[v])
				{
					parent_in_mst[v] = u;
					len_in_mst[v]=len_in_mst[u]=w[u][v];
				}
			}
		while((u=extract_min())!=-1)
		{
			in_mst[u] =1;
			ans+=w[u][parent_in_mst[u]];
			for(int v=1;v<=n;v++)
			{
				if(!in_mst[v]&&w[u][v]<len_in_mst[v])
				{
					parent_in_mst[v] = u;
					len_in_mst[v]=len_in_mst[u]=w[u][v];
				}
			}
		}
		
		cout << ans << endl;
	}
}






