#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		if(n == 0)return 0;
		int num,temp;
		cin >> num;
		for(int i=0;i<n-1;i++)
		{
           cin >> temp;
		   num ^= temp;
		}
		cout << num << endl;
	}

		
}


