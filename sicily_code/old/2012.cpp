#include <iostream>
using namespace std;
int father[1001];
int find(int v)
{
	if(father[v]<0)return v;
	else return find(father[v]);
}
void set_union(int u,int v)
{
	int b=find(v);int a=find(u);
	if(a>0&&b>0)
	{
	father[a]=father[a]+father[b];
	father[b]=a;
	}
	
}
int main()
{
	int n;
	while(cin >> n)
	{
		for(int i=1;i<=n;i++)father[i]=-1;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				char ch; cin >> ch;
				if(ch=='1')
				{
					set_union(i,j);
				}
			}
			int temp = find(1);
       if(father[temp]==-1*n)
	   {
		   cout <<temp << endl;
	   }
	   else
		   cout <<"-1"<<endl;
	
	}

}

	