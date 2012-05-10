#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	a =a%c;
	int temp = (a*a)%c;

	for(int i=0;i<b-2;i++)
	{
		temp = (temp*a)%c;
	}

	cout << temp << endl;

}
