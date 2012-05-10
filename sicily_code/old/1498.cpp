#include <iostream>
#include <string>
using namespace std;
string str[17];
void get_pinoa()
{
	str[0]="{}";
	str[1]="{{}}";
	for(int i=2;i<=15;i++)
	{
		for(int j=0;j<i-1;j++)
		{
			str[i]=str[i]+str[j];
			str[i]=str[i]+",";
		}
		str[i]=str[i]+str[i-1];
		str[i]="{"+str[i];
		str[i]=str[i]+"}";

	}
}
int main()
{
	get_pinoa();
	int a,b;
	string str1,str2;
	int n;
	cin >> n;
	while(n--)
	{
		cin >> str1>>str2;
		for(int i=0;i<=15;i++)
		{
			if(str1==str[i])a=i;
			if(str2==str[i])b=i;
		}
		cout << str[a+b] << endl;
	}
}
