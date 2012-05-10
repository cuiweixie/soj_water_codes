#include <iostream>
#include <string>
using namespace std;
string str;
int testcase;
void done()
{
	for(int i=0;i<str.length();i++)
	{
		for(int j=0;j<str.length();j++)
		{
			if(str[j]!='0')
			{
				if(j+1<str.length()&&str[j+1]>str[j])
				{
					char ch = str[j];
					str[j] = str[j+1];
					str[j+1]=ch;
				}
			}
		}
	}
	cout << str << endl;
}

int main()
{
	cin >> testcase;
	while(testcase--)
	{
		cin >> str;
		done();
	}
}