#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string str1;
string str2;
string add(string str1,string str2)
{
	string ans;
	reverse(str1.begin(),str1.end());
	reverse(str2.begin(),str2.end());
	int ai,bi,ci(0),co(0);
	if(str1.length() > str2.length())
	{
		str1.swap(str2);
	}
	int size = str1.length();	
	int i=0;
	for(;i<size;i++)
	{
		if(i < str2.length())
		{
		ci = co;
		ai =str1.at(i)-'0';
		bi = str2.at(i)-'0';
		co = (ai+bi+ci > 9)?1:0;
	    char sum = (ai+bi+ci)%10+'0';
		ans = ans +sum;
		}
		else 
		{
			ci = co;
			ai = str1.at(i) - '0';
			co = (ai + ci > 9)? 1:0;
			char sum = (ai + ci)%10 + '0';
			ans  = ans + sum;
		}
		if( co == 0)
		{
			reverse(ans.begin(),ans.end());
			return ans;
		}
		else{
			ans = ans + '1';
			reverse(ans.begin(),ans.end());
			return ans;
		}
	}


