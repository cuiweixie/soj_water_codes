#include <iostream>
#include <string>
using namespace std;

string str;
int main()
{
	freopen("in.txt","r",stdin);
	int testcase;
	cin >> testcase;
	for(int i=1;i<=testcase;i++)
	{
		if(i!=1) cout <<endl;
		int result=0;
		cin >> str;
		int len = str.length();
		while(1)
		{
			int d=0;
			for(int i=0;i<len;i++)
			{
				d = str[i]-'0'+10*d;
				str[i]= d/2+'0';
				d%=2;
			}
			if(d==0)result++;
			else break;
		}
		cout << "Case "<<i<<": " << result+1 << endl;
	}
}

