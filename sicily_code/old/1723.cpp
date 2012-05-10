#include <iostream>
using namespace std;
int gcd(int a,int b)
{
	return b?gcd(b,a%b):a;
}
int main()
{
	int x,y;
	while(cin >> x>>y)
	{
	  if(x==y&&y==0)return 0;
	  int ans=(x>y)?gcd(x,y):gcd(y,x);
	  cout << ans << endl;
	}
}