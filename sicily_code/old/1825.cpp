#include <iostream>
#include <map>
#include <string>
using namespace std;
map<string,int> ma;
string to_lower(string &str)
{
	for(int i=0;i<str.length();i++)
		if(str[i]>='A'&&str[i]<='Z')
		     str[i] = str[i]-'A'+'a';
	return str;
}

int main()
{
	int test,n;
	string str;
	cin >> test;
	while(test--)
	{
		cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> str;
			str=to_lower(str);
			if(ma.find(str)!=ma.end())
				ma[str]++;
			else
				ma[str]=1;
		}
		map<string,int>::iterator ite=ma.begin();
		while(ite!=ma.end())
		{
			cout <<ite->first<<" "<<ite->second <<endl;
		   ite++;
		}
		ma.clear();
		cout << endl;
	}
}
