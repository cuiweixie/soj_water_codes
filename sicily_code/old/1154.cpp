#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int x,int y)
{
	return (x<y);
}

int main()
{
	int testcase;
	cin >> testcase;
	for(int i=0;i<testcase;i++)
	{
		int n;
		cin >> n;
		int *arr = new int[n];
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}

		sort(arr,arr+n,cmp);
		for(int i=0;i<n;i++)
		{
			cout << arr[i]<< endl;
		}

		delete []arr;
	}
}