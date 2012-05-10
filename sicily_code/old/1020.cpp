#include <iostream>
#include <string>
#include <vector>
using namespace std;

string str;
int a[1000];
int basis[110];
int base_len;
int len;
int ans[100];
const int N = 10000;
void initialized()
{
	len = str.length();
	for(int i=0;i<len;i++)
		a[i]=str[i]-'0';
}
int mod(int factor)
{
	int r=0;
	for(int i=0;i<len;i++)
	{
		r=r*10+a[i];
		r=r%factor;
	}
	return r;
}

int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		cin >> base_len;
        for(int i=0;i<base_len;i++)cin >> basis[i];
		cin >> str;
	    initialized();
		for(int i=0;i<base_len;i++)
		{
			ans[i] = mod(basis[i]);
		}
		cout << "(";
		for(int i=0;i<base_len-1;i++)
			cout << ans[i] <<",";
		cout <<ans[base_len-1]<<")"<<endl;
	}
}
