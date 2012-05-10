#include <iostream>
#include <cstring>
using namespace std;
long long int b[33],m[33],k,M,M_i[33];
  int exGcd(int a, int b, long long int &x, long long int &y)
  {
  if(b == 0)
  {
  x = 1;
  y = 0;
  return a;
  }
  int r = exGcd(b, a % b, x, y);
  int t = x;
  x = y;
  y = t - a / b * y;
  return r;
  }
long long int x,y;
void done()
{
	
	for(int i=0;i<k;i++)
	{if(m[i]!=0){
		int Mi=M/m[i];
	exGcd(Mi,m[i],M_i[i],y);
	M_i[i]*=Mi;}
	}
	long long int ans =0;
	for(int i=0;i<k;i++)ans+=b[i]*M_i[i];
	while(ans<0) ans+=M;
	while(ans>M)ans-=M;
	cout <<  ans << endl;
}
int main()
{
	freopen("in.txt","r",stdin);
	while(cin >> k&&k!=0)
	{
		M=1;
		for(int i=0;i<k;i++)cin >> b[i];
		for(int j=0;j<k;j++){cin >> m[j];M*=m[j];}
		done();
	}
}
