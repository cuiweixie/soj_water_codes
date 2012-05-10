#include <iostream>
#include <cstring>
using namespace std;

bool m[500][100];
int n,d;
int main()
{
	// freopen("in.txt","r",stdin);
	while(cin >> n >> d)
	{
		if(n==0&&d==0)
			return 0 ;
		for(int i=0;i<d;i++)
		for(int j=0;j<n;j++)
		{
			cin >> m[i][j];
		}
		bool ok =0;
		for(int i=0;i<n;i++)
		{
			bool temp =1;
			for(int j=0;j<d;j++)
				temp=temp&&m[j][i];
			if(temp==1)
			{
				ok = true;
				break;
			}
		}
		if(ok) cout << "yes"<<endl;
		else cout <<"no"<<endl;
	}
}