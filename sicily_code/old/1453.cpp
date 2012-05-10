#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
map<long long int,int> ma;
map<int ,int> m;
long long int a[5];
int ans;
long long int get_tag()
{
	sort(a,a+5);
	long long int ans =0;
	for(int i=0;i<5;i++)
		ans=ans*1000+a[i];
	return ans;
}

int main()
{
	int n;
	while(cin >> n&&n!=0)
	{
		ans = 0;
		int maxx=0;
		while(n--)
		{
			for(int i=0;i<5;i++)
				cin >> a[i];
			long long int temp = get_tag();
			if(ma.find(temp)!=ma.end())
			{
				ma[temp]++;
			}
			else ma[temp]=1;
		}
	 map<long long int,int>::iterator ite = ma.begin();
	 while(ite!=ma.end())
	 {
		 if(m.find(ite->second)!=m.end())
			 m[ite->second]++;
		 else
			 m[ite->second]=1;
	 }
	   map<int,int>::reverse_iterator ite1 = m.rbegin();
	   cout <<ite1->second <<endl;
       m.clear();
		ma.clear();
	}
}
				

