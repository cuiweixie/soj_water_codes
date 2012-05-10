#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

map<int,vector<int> > ma;
int n,p,a;
int main()
{
	while(cin >> n)
	{
		while(n--)
		{
			cin >> p >>a;
			if(ma.find(p)==ma.end())
			{
				vector<int> vec;vec.push_back(p);
				ma.insert(pair<int,vector<int> >(p,vec));
			}
			else
			{
				ma[p].push_back(p);
			}
		}
		map<int,vector<int> >::iterator ite = ma.begin();
		while(ite!=ma.end())
		{
			sort(ite->second.begin(),ite->second.end());
		    int len=ite->second.size();
			if(len%2==0)
			{
				cout << ite->first <<" "<<(ite->second.at(len/2-1)+ite->second.at(len/2))/2<<endl;
			}
			else
			{
				cout << ite->first<<" "<<ite->second.at((len+1)/2-1)<<endl;
			}
		}
		ma.clear();
	}
}
				