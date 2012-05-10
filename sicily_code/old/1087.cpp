#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		if(n==0) return 0;
		if(n>=3) cout << "Bob"<<endl;
		else cout << "Alice"<<endl;
	}
}