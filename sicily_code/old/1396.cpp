#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> lis;
int n,m,t,s,d;
int main()
{
	freopen("in.txt","r",stdin);
	cin >> t;
	while(t--)
	{
		cin >> m >> n;
		while(m--){
			string str;
			cin >> str;
			lis.push_back(str);
		}
		while(n--)
		{
			cin >> s >> d;
			string str1=lis[s];
		
			lis.insert(lis.begin()+d,str1);
				lis.erase(lis.begin()+s);
		}
		for(int i=0;i<lis.size();i++)
			cout <<lis[i]<<" ";
		cout <<endl;
		lis.clear();
	}
}
			

			