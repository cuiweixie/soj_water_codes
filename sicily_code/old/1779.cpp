#include <iostream>
#include <string>
using namespace std;
string multiply(string str1,string str2)
{
	int len =str1.length()+str2.length();
	string str3(len,'0');
	int co;
	for(int p1=0,i=str1.length()-1;i>=0;i--,p1++)
		for(int p2=0,j=str2.length()-1;j>=0;j--,p2++)
		{
			co=( str3[len-1-(p1+p2)]-'0'+(str1[i]-'0')*(str2[j]-'0'))/10;
			str3[len-1-(p1+p2)]=(str3[len-1-(p1+p2)]-'0'+(str1[i]-'0')*(str2[j]-'0'))%10+'0';
			str3[len-1-p1-p2-1]=str3[len-1-p1-p2-1]+co;
			
		}
		if(str3[0]=='0')
		{
      int i=0;
	  for(;i<str3.length();i++)
		  if(str3[i]!='0')break;
	  str3.erase(0,i);
		}

	return str3;
}
string str1,str2,str3;
int main()
{
	int t,n;cin >> t;
	while(t--)
	{
		cin >> str1>>str2>>n;
		if(n==1){cout << str1<<endl;
		continue;
		}
		if(n==2){cout << str2<<endl;
		continue;
		}
		bool tag=0;
		for(int i=3;i<=n;i++)
		{
			str3=multiply(str1,str2);
			str1=str2;
			str2=str3;
			if(str3.length()>1000)
			{
				cout << "Ooops!"<<endl;tag=1;
			    break;
			}
		}
		if(tag==0) cout << str3<<endl;
	}
}



