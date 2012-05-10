#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int n;
string str[201];

int ans(int n)
{
	return 2*((int)(pow(2.0,n)-1));
}
string get_n(string a)
{
	int co =2,ci = 0;
	for(int i=a.length()-1;i>=0;i--)
	{
		ci = co;
		co = (ci+2*(a.at(i)-'0'))/10;
		a[i] = '0'+(ci+2*(a[i]-'0'))%10;
	}
	if(co !=0)
	{
		a = "1"+a;
	}
	return a;
}
void done()
{
	str[1] = "2"; str[2] = "6";
	for(int i=3;i<201;i++)
	{
		str[i] = get_n(str[i-1]);
	}
}
		

int main()
{
	int t=0;
	done();
	while(cin >> n)
	{
		if(t++>0) cout << endl;
		cout << str[n] << endl;
		
	}
}