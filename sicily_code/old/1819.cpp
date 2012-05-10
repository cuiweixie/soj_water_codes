#include <iostream>
using namespace std;
bool a[1000][1000],b[1000][1000],c[1000][1000];
int n;
bool ok()
{
	int equal=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			equal=0;
			for(int k=0;k<n;k++)
			{
			   equal+=a[i][k]&&b[k][j];
			}
			equal%=2;
			if(equal!=c[i][j]) return false;
		}
		return true;
}
int main()
{
	//freopen("in.txt","r",stdin);
	int t;cin >> t;
	while(t--)
	{
		cin >> n;char ch;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				cin >> ch;
			a[i][j]=(ch=='1');
			}
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				cin >> ch;
			b[i][j]=(ch=='1');
			}
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				cin >> ch;
			c[i][j]=(ch=='1');
			}
		bool o=ok();
		if(o) cout <<"YES"<<endl;
		else 
			cout <<"NO"<<endl;
	}
	//fclose(stdin);
}