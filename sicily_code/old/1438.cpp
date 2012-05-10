#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int times;
	cin >> times;
	for(int i=0;i< times;i++)
	{
		int n; vector<int> list;
		cin >> n;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin >> temp;
			list.push_back (temp);
		}

		sort(list.begin(),list.end());
		int k = n%3; 
		int sum(0);
		for(int i =k; i <n; i+=3)
		{
			sum+=list[i];
		}
		cout << sum << endl;
		list.clear();
	}
}