#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	while(cin >> str)
	{
		if(str == "0")
			return 0;
		int len = str.length();
	    long long int n[10000];
	
	for (int i = len - 1; i >= 0; i--)
  {
   if (str[i] == '0')
   {
    n[i] = 0;

   }
   if (i == len - 1)
   {
    n[i] = 1;
   }
   else if (i == len - 2)
   {
    int tmp = (str[i]-'0')*10+str[i+1]-'0';
    if (tmp == 10 || tmp == 20 || tmp > 26)
    {
     n[i] = 1;
    } 
    else
    {
     n[i] = 2;
    }
   } 
   else
   {
    int tmp = (str[i]-'0')*10+str[i+1]-'0';
    if (tmp == 10 || tmp == 20)
    {
     n[i] = n[i+2];
    } 
    else if (tmp > 26)
    {
     n[i] = n[i+1];
    }
    else
    {
     n[i] = n[i+1] + n[i+2];
    }
   }
  }
  cout << n[0] << endl;
 }
}
