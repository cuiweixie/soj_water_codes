#include <iostream>
#include <string>
#include <vector>
using namespace std;

string add(string str1,string str2)
{
	if(str1 == "0") return str2;
	if(str2 == "0") return str1;
	if(str1.length() < str2.length()) str1.swap(str2);
	int ci =0,co=0;
	for(int i=str1.length()-1,j=str2.length()-1;i>=0;i--,j--)
	{
		if(j>=0)
		{
		   ci = co;
		   co = (str1[i]-'0'+str2[j]-'0'+ci)/10;
		   str1[i] = (str1[i]-'0'+str2[j]-'0'+ci)%10+'0';
		}
		else
		{
			if(co!=0)
			{  ci = co;
			   co = (str1[i]-'0'+ci)/10;
		       str1[i] = (str1[i]-'0'+ci)%10+'0';
			}
		}
	}
		if(co !=0)
		{
			str1 = "1"+str1;
		}
		return str1;
}

vector<string> vec(11);
int m,d;

int main()
{
	while(cin >> m >> d)
	{
		if(m == 0) return 0;
		//initialized
       vec[0]= vec[m] = "1";
		for(int i=1;i<m;i++) vec[i]="0";
		if(m==1)
		{
			vec[0] = "1";
			for(int i=1;i<=d;i++)
				vec[0] = add(vec[0],vec[0]);
			cout << vec[0] << endl;
		}
		else 
		{
		for(int i=1;i<=d;i++)
		{
			string new_birth = vec[m];
			vec[m] = add(vec[m],vec[m-1]);
			for(int i=m-1;i>=2;i--)
			{
				vec[i] = vec[i-1];
			}
			vec[1] = new_birth;
			vec[0] =add(vec[0],new_birth);
		}
	
		cout << vec[0] << endl;
		}
	}
}
	




