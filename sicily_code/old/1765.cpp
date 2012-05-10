#include <iostream>
#include <string>
using namespace std;

int count[26];
string str;

int is_prime(int p)
{
	for(int i=2;i<=p/2;i++)
		if(p%i==0)
			return false;
	return true;
}

int main()
{
	while(cin >> str)
	{
		for(int i=0;i<26;i++) count[i]=0;
		for(int i=0;i<str.length();i++)
		{
			count[str[i]-'a']++;
		}
		int max=0,min=100;
		for(int i=0;i<26;i++)
		{
			if(count[i] > max) max = count[i];
			if(count[i]!=0&&count[i] < min)
				min = count[i];
		}
		int ans = max-min;
		if(is_prime(ans))
		{
			cout << "Lucky Word"<< endl;
			cout << ans << endl;
		}
		else 
			cout <<"No Answer\n"<<"0"<<endl;
	}
}

