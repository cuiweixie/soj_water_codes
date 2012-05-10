#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;
multiset<string> A;
multiset<string> B;
multiset<string> C;
string get_match(string str)
{
	for(int i=0;i<str.length();i++)
	{
		if(str[i] =='A') str[i]='T';
		else if(str[i]=='T')str[i] ='A';
		else if(str[i]=='C') str[i]='G';
		else if(str[i]=='G')str[i] = 'C';
	}
	return str;
}


void initialized(int n)
{
    string str;
	A.clear();
	B.clear();
	C.clear();
	for(int i=0;i<n;i++)
	{
		cin >> str;
		A.insert(str);
		B.insert(get_match(str));
	}
	set_intersection(A.begin(),A.end(),B.begin(),B.end(),insert_iterator<multiset<string> >(C,C.begin()));
	cout <<C.size()/2 << endl;
}

int main()
{
	int n;
	int testcase;cin >> testcase;
	while(testcase--)
	{
		cin >> n;
		initialized(n);
	}
}
