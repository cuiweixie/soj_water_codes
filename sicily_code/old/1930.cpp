#include <iostream>
using namespace std;

int main()
{
	int test;
	cin >> test;
	int *list;
	for(int i=0;i < test; i++)
	{
		int n;
		cin >> n;
		list = new int[n];
		for(int j=0;j < n; j++)
		{
			cin >> list[j];
		}

		int count =0;

		for(int j = 0; j < n; j++)
		{
			int temp1 = list[j]; int t =j;
			for(int k = j+1; k < n;k++)
			{
				if(temp1 > list[k])
				{
					count ++;
					temp1 = list[k];
					t = k;
				}
			}
			int temp2 = list[j];
			list[j] = list[t];
			list[t] = temp2;
		}
	cout << count << endl;
	}
	delete [] list;

}

