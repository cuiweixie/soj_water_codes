#include <iostream>
#include <string>
using namespace std;
int testcase=0;
string str1,str2;
int main()
{
       getline(cin,str1);int k=1;
	   for(int i=0;i<str1.length();i++)testcase=testcase*10+str1[i]-'0';
	   while(testcase--)
	   {
		   cout <<k<<" ";
		   getline(cin,str1);
		   getline(cin,str2);
		   for(int i=0;i<str1.length();i++)
		   {
			   if(str1[i]==' ')cout << str1[i];
			   else
				   cout << str2[str1[i]-'A'];
		   }
		   k++;
		   cout << endl;
	   }
}


