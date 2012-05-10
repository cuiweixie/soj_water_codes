#include <iostream>
#include <string>
using namespace std;
string str[1001];
string _minus(string str1,string str2)
{
	if(str2 == "0") return str1;
    int ci =0,co =0;
	for(int i=str1.length()-1,j=str2.length()-1;i>=0;j--,i--)
	{
		if(j>=0)
		{
			ci = co;
			co = (str1[i] - str2[j] -ci <0);
			str1[i] = (str1[i] - str2[j] -ci+10)%10+'0';
		}
		else {
			if(co !=0)
			{
			ci = co;
			co = (int)(str1[i]-'0' -ci <0);
			str1[i] = (str1[i] -'0'-ci+10)%10+'0';
			}
		}
	}
	return str1;
}
string add(string str1,string str2)
{
	if(str1.length() < str2.length()) str1.swap(str2);
	if(str1 == "0") return str2;
	if(str2 == "0") return str1;
	int ci=0,co=0;
	for(int i=str1.length()-1,j=str2.length()-1;i>=0;i--,j--)
	{
		if(j>=0)
		{
			ci = co;
			co = (str1[i]-'0'+str2[j]-'0'+ci)/10;
			str1[i] =(str1[i]-'0'+str2[j]-'0'+ci)%10+'0';
		}
		else 
		{
			if(co !=0)
			{
			ci = co;
			co = (str1[i]-'0'+ci)/10;
			str1[i] =(str1[i]-'0'+ci)%10+'0';
			}
		}
	}
	if(co !=0)
		{
	      str1 = "1"+str1;
		}

	return str1;
}
void getans()
{
	 str[1]="0",str[2]="1",str[3]="1";
	 string str3_1 = "1";
	for(int i=4;i<=1000;i++)
	{
		str3_1 = add(str3_1,str3_1);
	   str[i] = add(str[i-2],str3_1);
	   
	}


}

int main()
{
	getans();
	int n;
	while(cin >> n)
	{
		cout << str[n] << endl;
	}
}





