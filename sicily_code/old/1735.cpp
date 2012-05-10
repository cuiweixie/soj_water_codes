#include <iostream>
#include <cstring>
using namespace std;
long long int a[101],b[101],M[11][11],n,m;
void done(int i)
{
	for(int k=1;k<=m;k++)
	{
		for(int l=1;l<=m;l++)
		b[i+k-1]+=a[i+l-1]*M[k][l];
	}
}

int main()
{
	//freopen("in.txt","r",stdin);
	while(cin >> n>>m)
	{
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++)
		{
			cin >> a[i];
		}
		memset(b,0,sizeof(b));
		
		for(int k=1;k<=m;k++)
			for(int l=1;l<=m;l++)
				cin >> M[k][l];
		for(int i=1;i+m<101;i+=m)
			done(i);
		if(n%m!=0) n = n+(m-n%m);
		for(int i=1;i<n;i++)cout << b[i]<<" ";
		cout<<b[n]<<endl;
	}
	//fclose(stdin);
}