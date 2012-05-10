#include <iostream>
#include <string>
#include <set>
using namespace std;
string str;
set<int> s;
void done()
{
	int max_len = str.length()-2;
	int val;
	bool surprise=1;
	for(int i=1;i<=max_len;i++)
	{
	       s.clear();
		   for(int j=0;j+i<str.length();j++)
		   {
			   val = (str[j]-'A')*26+(str[j+i]-'A');
			   if(s.find(val)!=s.end()) 
			   {
				   surprise = 0;
				   goto out;
			   }
			   else
			       s.insert(val);
		   }
	}
out:;
	if(surprise)
		cout <<str <<" is surprising."<<endl;
	else
		cout << str <<" is NOT surprising."<<endl;
}
int main()
{
	while(cin >> str&&str!="*")
	{
		done();
	}
}

