#include <iostream>
using namespace std;
int n,m;
int v[110];
int depth[110];
int treeNumber[110];
int dep;
int father,son;
int width(int *depth,int n)
{
	int *count = new int[n];
	for(int i=0;i<n;i++) count[i] =0;
	for(int i=1;i<=n;i++)count[depth[i]]++;
	int max(0);
	for(int i=0;i<n;i++) max = (count[i] > max)?count[i]:max;
	return max;
}

int main()
{
	while(cin >> n >> m)
	{
		if(n == 0) return 0; 
		if(m==0){
			cout << "0 " << n << endl;
			continue;
		}
		for(int i=1;i<=n;i++)
		{
			v[i] = -1;
			depth[i] = 0;
			treeNumber[i] = i;
		}
		dep =0;
		for(int i=1;i<=m;i++)
		{
			cin >> father >> son;
			if(father == son||v[son]!=-1||treeNumber[son] == treeNumber[father])
			{
				cout<<"INVALID"<<endl;i++;
				for(;i<=m;i++) cin >> father >> son;
				goto out;
			}
		   v[son] = father;
		   treeNumber[son] = father;
		   depth[son] = depth[father]+1;
		   if(dep < depth[son])dep=depth[son];
		}
		cout << dep <<" "<<width(depth,n) << endl;
		out:;
	}
}
