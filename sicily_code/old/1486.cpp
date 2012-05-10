#include <iostream>
#include <map>
#include <stdio.h>
using namespace std;

map<int,int> m_count;
int n;

int main()
{
	int t=0;
	while(cin >> n)
	{
		if(t++>0) cout<<endl;
		m_count.clear();
		int num;
		for(int i=0;i<n;i++)
		{
			cin >> num;
			if(m_count.find(num)==m_count.end())
			{
				m_count.insert(pair<int,int>(num,1));
			}
			else 
			{
				m_count.at(num)++;
			}
		}
		map<int,int>::iterator ite = m_count.begin();
		for(;ite!=m_count.end();++ite)
		{
			printf("%d %d\n",ite->first,ite->second);
		}
		
	}
}