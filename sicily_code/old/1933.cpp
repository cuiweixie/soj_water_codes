#include <iostream>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		int *list = new int[n];
		long long int count =0;
		cin >> list[0];
		for(int i=1;i<n;i++)
		{
			cin >> list[i];
			if(list[i-1] <0)
				count-=list[i-1];
			else
				count += list[i-1];
			list[i]+=list[i-1];
		}
       cout<< count << endl;
	}
}
		
