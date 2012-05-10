#include <iostream>
#include <list>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		list<int> poker_list;
        for(int i=0;i<n;i++)
		{
			poker_list.push_back(i+1);
		}
		for(int i=0;i<n;i++)
		{
			cout<<poker_list.front()<<" ";
			poker_list.pop_front();
			if(!poker_list.empty())
			{
			poker_list.push_back (poker_list.front());
			poker_list.pop_front();
			}
		}
		cout<<endl;
	}
}