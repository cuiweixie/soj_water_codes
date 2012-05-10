#include <iostream>
#include <set>
#include <string>
using namespace std;
int min_dif,maxx,minn;
set<int> s;
set<int>::iterator ite;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int temp; string instruct;
		s.insert(1);
		while(n--)
		{
			cin >> instruct;
			if(instruct=="generate")
			{
				cin >> temp;
				s.insert(temp);
			}
			else if(instruct=="remove")
			{
				cin >> temp;
				s.erase(temp);
			}
			else if(instruct=="query")
			{
				int minn=1000000;
				if(s.size()<2)cout <<"-1"<<endl;
				else{
					int t;
					ite=s.begin();
					t=*ite;
					ite++;
					while(ite!=s.end())
					{
						minn=(minn<*ite-t)?minn:*ite-t;
						t=*ite;
							ite++;
					}
					cout << minn << endl;
				}
			}
			else;
		}
		s.clear();
	}
}
		

