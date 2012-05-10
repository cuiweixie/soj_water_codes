#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string str;
long long  int testcase,n;
const int N = 100000;
int remainder()
{
	int ans =0;
	for(int i=0;i<str.length();i++)
	{
		ans=((ans*10)%n+str[i]-'0')%n;
	}
	return ans;
}

int main()
{
	cin >> testcase;
	while(testcase--)
	{
		cin >> n;
		cin >> str;
		cout << remainder()<<endl;
	}
}


