#include <iostream>
#include <string>
using namespace std;
void process(string &str)
{
	int i=0;
	int start=0;
	while(i<(int)str.length())
	{
		if(str[i]<='Z'&&str[i]>='A')
			start=i;
		if(str[i]=='?')
		{
			if(str.substr(start,5)=="What ")
			{
				cout<<"Forty-two";
				start+=4;
				while(start<i)
				{
					cout<<str[start];
					start++;
				}
				cout<<"."<<endl;
			}
			start=i+1;
		}
		else if(str[i]=='.')
		{
			start=i+1;
		}
		i++;
	}
}
int main()
{
	string str;
	getline(cin,str);
	process(str);
}
