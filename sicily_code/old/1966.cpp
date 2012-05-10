#include <iostream>
#include <list>
using namespace std;

int t,n;

int main()
{
	
	cin >> t;
	while(t--)
	{
		cin >> n;
	    list<int> lis;
		for(int i=1;i<=n;i++)
		{
			lis.push_back(i);
		}
	
		while(!lis.empty())
		{
			int temp = lis.front();
				cout << temp << " ";
			lis.pop_front();
			if(!lis.empty())
			{
			lis.push_back (lis.front());
			lis.pop_front();
			}
		 
		}
		cout << endl;
	}
}