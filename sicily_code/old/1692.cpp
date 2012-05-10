#include <iostream>
using namespace std;
int n,m;
bool ok()
{
  if(n==1||m==1) return 0;
  if(n%2==0&&m%4==0)return 1;
  if(n%4==0&&m%2==0) return 1;
  if(n%3==0&&m%8==0) return 1;
    if(m%3==0&&n%8==0) return 1;
    else return 0;
    }
    int main()
    {
      while(cin >> n >> m &&n!=0)
        if(ok())cout <<"YES"<<endl;
        else 
        cout << "NO"<<endl;
	}