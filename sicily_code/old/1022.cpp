#include <iostream>
#include <map>
#include <string>
using namespace std;
map<int,string> ma;
int t;
string name,command;
int s;
int main()
{
	cin >> t;
	while(t--)
	{
		while(cin >> command)
		{
			if(command=="End")break;
			else if(command=="Add")
			{
				cin >> name >> s;
				ma[s]=name;
			}
			else if(command=="Query")
			{
				int siz=ma.size();
				if(siz%2==0)
				  cout <<"No one!"<<endl;
				else
				{
					int pos=siz/2;
					map<int,string>::iterator ite=ma.begin();
					for(int i=2;i<=pos;i++)
						ite++;
					cout <<ite->second<<" is so poor."<<endl;
				}
			}
		}
		int siz=ma.size();
		if(siz%2==0)
			cout << "Happy BG meeting!!"<<endl;
		else
		{
			int pos=siz/2;
			map<int,string>::iterator ite=ma.begin();
					for(int i=2;i<=pos;i++)
						ite++;
			cout <<ite->second<<" is so poor."<<endl;
		}
	 ma.clear();
	}
}