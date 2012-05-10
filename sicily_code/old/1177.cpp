#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
double a,r;
string A,U,R,V,s;
string str[100];int count;
int main()
{count=0;
	freopen("in.txt","r",stdin);
	while(getline(cin,s))
	{
		a=r=0;
		if(s[0]=='-')break;
		int i=0,pow=1;
		for( i=0;s[i]!=' ';i++)
		{
			if(s[i]!='.')
			{
				if(pow!=1)pow*=10;
				a=a*10+s[i]-'0';
			}
			else
			{
				pow*=10;
			}
		}
		a/=pow/10;U.clear();
		for(i++;s[i]!=' ';i++)
			U+=s[i];
		pow=1;
		for(i++;s[i]!=' ';i++)
		{
			if(s[i]!='.')
			{
				if(pow!=1)pow*=10;
				r=r*10+s[i]-'0';
			}
			else
			{
				pow*=10;
			}
		}
		r/=(double)pow/10;V.clear();
		for(i++;i<s.size();i++)V+=s[i];
		double rate=a/r;
		if(rate<0.01)
			str[count++]=V;
		else
		{
			cout <<V<<" "<< fixed<<setprecision(1)<< a <<" "<<U<<" "<<fixed<<setprecision(0)<<rate*100<<"%"<<endl;
		}
	}
	cout <<"Provides no significant amount of:"<<endl;
	for(int i=0;i<count;i++)cout <<str[i]<<endl;
}
