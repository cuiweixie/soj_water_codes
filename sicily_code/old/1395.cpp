#include <iostream>
#include <string>
using namespace std;

string round(string &str)
{
	if(str.length()==1)
		return str;
	else
	{
		int carry=0;
		for(int i=str.length()-1;i>=1;i--)
		{
			if(str[i]+carry>='5')carry=1;
			else carry=0;
			str[i] = '0';
		}
		if(str[0]=='9'&&carry==1)
		{
			str[0]='0';
			str="1"+str;
		}
		else
		{
			str[0]=str[0]+carry;
		}
		return str;
	}
}
int main()
{
    string str;
	while(cin >> str)
	{
		cout << round(str)<<endl;
	}
}
