#include <iostream>
#include <string>
using namespace std;
int n,count=0;
string str,ans;

int main()
{
	cin >> n;
	while(n--)
	{
		cin >> str;str=str+"#";
		for(int i=0;i<str.length()-1;i++)
		{
			if(str[i+1]!=str[i])
			{
			   count++;
			   string temp;
			   while(count!=0)
			   {
				   temp=(char)(count%10+'0')+temp;
				   count/=10;
			   }
			   ans=ans+temp;
			   ans=ans+str[i];
			}
			else
				count++;
		}
		cout << ans << endl;
		ans.clear();
	}
}
