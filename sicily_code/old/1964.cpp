#include <iostream>
#include <map>
#include <string>
using namespace std;
map<string,int> ma;
string str;
int n,m;
int main()
{
	cin >> n;
	while(n--)
	{
		cin >> str;
		if(ma.find(str)==ma.end())
			ma.insert(pair<string,int>(str,1));
		else
			ma[str]++;
	}
	cin >> m;
	while(m--)
	{
		cin >> str;
		if(ma.find(str)!=ma.end())
			cout << ma[str]<<endl;
		else
			cout << "0"<<endl;
	}
}
