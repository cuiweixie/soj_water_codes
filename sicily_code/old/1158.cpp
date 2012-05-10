#include <iostream>
#include <set>
using namespace std;
set<int> s[11][11];

int main()
{
	freopen("in.txt","r",stdin);
	int m,n;
    while(cin>>m>>n)
	{
		for(int i=1;i<=m;i++)
		 for(int j=1;j<=n;j++)
		 {
			 int x;cin >> x;
			 s[i][j].insert(x);
		 }
		 for(int i=1;i<=m;i++)
			 for(int j=1;j<=n;j++)
			 {
				 set<int>::iterator ite2=s[i-1][j].begin(),ite3=s[i][j-1].begin();
				 int x=*s[i][j].begin();if(i!=1||j!=1)s[i][j].erase(s[i][j].begin());
				 while(ite2!=s[i-1][j].end())
				 {
					 s[i][j].insert((*ite2)+x);
					 ite2++;
				 }
                 while(ite3!=s[i][j-1].end())
				 {
					 s[i][j].insert((*ite3)+x);
					 ite3++;
				 }
			 }
			 set<int>::iterator  ite1=s[m][n].begin();
			 int x=-1;
			 while(ite1!=s[m][n].end())
			 {
				 if((*ite1)>0)
					 {
						 x=*ite1;
						 break;
				 }
				 ite1++;
			 }
			 cout << x << endl;
			 for(int i=1;i<=m;i++)
				 for(int j=1;j<=n;j++)
					 s[i][j].clear();
	}
}

