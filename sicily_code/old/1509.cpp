#include <iostream>
#include <stack>
using namespace std;
int train[1001];
stack<int> sta;
int n;

int main()
{
	while(cin >> n&&n!=0)
	{
		while(cin >> train[1]&&train[1]!=0)
		{
			for(int i=2;i<=n;i++)cin >>train[i];
			int num=1;
			for(int i=1;i<=n;i++)
			{
				if(!sta.empty()&&sta.top()==train[i])
				{
					sta.pop();
				}
				else if(sta.empty()==0&&sta.top()!=train[i])
				{
					for(int j=num;j<train[i];j++)sta.push(j);
                    num=train[i]+1;
				}
				else if(sta.empty())
				{
					for(int j=num;j<train[i];j++)sta.push(j);
					num=train[i]+1;
				}
				else;
			}
			if(sta.empty())cout <<"Yes"<<endl;
			else
			{
				cout << "No"<<endl;
				while(!sta.empty())sta.pop();
			}
		}
		cout << endl;
	}
}
		   
	


          


