#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> vec;
string str;
int n,testcase;

int main()
{
	cin >> testcase;
	while(testcase--)
	{
		cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> str;
			vec.push_back(str);
		}
		bool ans=0;
		sort(vec.begin(),vec.end());
		for(int i=0;i<vec.size()-1;i++)
		{
			if(vec[i].length()<vec[i+1].length())
			if(vec[i+1].substr(0,vec[i].size())==vec[i])
			{
				ans =1;
				break;
			}
		}
		if(ans==1) cout << "NO"<<endl;
		else cout << "YES"<<endl;
		vec.clear();
	}
}
