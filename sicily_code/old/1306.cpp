#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,interval;
	while(cin >> n >> interval)
	{
		if(n == 0) return 0;
		vector<int> list;

		for(int i=0;i<n;i++)
		{
			int temp;
			cin >> temp;
			list.push_back(temp);
		}

		sort(list.begin(),list.end());
		cout << list[0];
		for(int i=interval;i < n;i+=interval)
		{
			cout <<" "<< list[i];
		}
		cout << endl;
	}
}
