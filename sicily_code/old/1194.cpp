#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

set<string> friends;
set<string> sender;
set<string> intersect;
int n,m;
string name;
string to_lower(string str)
{
	for(int i=0;i<str.length();i++)
		if(str[i]>='A'&&str[i]<='Z')
		str[i] = str[i]-'A'+'a';
	return str;
}
int initialized(int n,int m)
{
	friends.clear();
	sender.clear();
	intersect.clear();
	for(int i=0;i<n;i++)
	{
		cin >> name;
		friends.insert(to_lower(name));
	}
	for(int i=0;i<m;i++)
	{
		cin >> name;
		if(sender.find(to_lower(name))==sender.end())
		sender.insert(to_lower(name));
	}

	 set_intersection(friends.begin(),friends.end(),sender.begin(),sender.end(),insert_iterator<set<string> > (intersect,intersect.begin()));

	return n-intersect.size();
}

int main()
{
	    int test;cin >> test;
		while(test--)
		{
		cin >> n>>m;
		cout << initialized(n,m)<< endl;
		}
}