#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int j=0;j<n;j++)
	{
		int i;
		cin >> i;
		string s;
		cin >> s;
		s.erase(i-1,1);
		cout << j+1 << " " << s << endl ;
	}
}