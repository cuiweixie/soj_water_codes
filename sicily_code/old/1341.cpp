#include <iostream>
#include <set>
using namespace std;

set<int> s;
int m;

int main()
{
	while(cin >> m)
	{
		s.clear();
		int temp;
		for(int i=0;i<m;i++)
		{
			cin >> temp;
			s.insert(temp);
		}
        cout <<s.size() << endl;
		set<int>::iterator ite = s.begin();
		set<int>::iterator ite2 ;
		while(ite != s.end())
		{
			ite2 = ite;
			ite2++;
			if(ite2 != s.end())
			cout << *ite<<" ";
			else
				cout <<*ite;
			ite++;
		}
		cout << endl;
	}
}