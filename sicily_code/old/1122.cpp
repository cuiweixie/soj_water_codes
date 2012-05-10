#include <iostream>
#include <string>
#include <set>
using namespace std;
set<string> s[100];
set<string> ca;
set<string>::iterator ite;
int k,m,c[100],r[100];
string str;

int main()
{
	freopen("in.txt","r",stdin);
	while(cin>>k&&k!=0)
	{
		cin>>m;
		for(int i=0;i<k;i++)
		{
			cin >> str;
			ca.insert(str);
		}
		for(int i=0;i<m;i++)
		{
			cin>> c[i]>>r[i];
			for(int j=0;j<c[i];j++)
			{
				cin>> str;
				ite=ca.find(str);
				if(ite!=ca.end())
				{
					r[i]--;
				}
			}
		}
		bool ok=1;
		for(int i=0;i<m;i++)
		{
			if(r[i]>0)
				{
					ok=false;
					break;
			}
		}
		ca.clear();
		if(ok)cout<<"yes"<<endl;
		else cout <<"no"<<endl;
	}
}


