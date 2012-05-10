#include <iostream>
#include <string>
using namespace std;
string str;
void done()
{
	int i=0,j=0;
	int times=0;
	bool set_i=0;
	for(int k=0;k<str.length();)
	{
		  if(k+1<str.length()&&isdigit(str[k+1]))
		  {
			char ch = str[k];k++;
			times=0;
			  for(;k<str.length()&&isdigit(str[k]);k++)
			  {
				  times = times*10+(str[k]-'0');
			  }
			  for(int i=0;i<times;i++) cout << ch;
		  }
		  else{ cout << str[k];k++;}
	}
	cout << endl;
}




int main()
{
	while(cin >> str&&str!="XXX")
	{
		done();
	}
}
	   

