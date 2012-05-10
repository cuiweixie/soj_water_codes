#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(string str1,string str2)
{
	return str1 + str2 <str2+str1;
}

int main()
{
	int test;
	cin >> test;
	string str[8];
	for(int i=0;i<test;i++)
	{
       int n;
	   cin >> n;
	
	   for(int j=0;j<n;j++)
	   {
		   cin >> str[j];
	   }

	   sort(str,str+n,cmp);
	   for(int j=0;j<n;j++)
	   {
		   cout << str[j];
	   }

	   cout << endl;
	}
}