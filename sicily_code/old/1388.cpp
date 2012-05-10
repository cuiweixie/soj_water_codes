#include <iostream>
#include <string>
using namespace std;

string str;
int main()
{
	while(getline(cin,str)&&str!="#")
	{
		int ans =0;
		int p=1;
		for(int i=0;i<str.length();i++,p++)
		{
			if(str[i]!=' ')
				ans=ans+p*(str[i]-'A'+1);
		}
		cout << ans << endl;
	}
}