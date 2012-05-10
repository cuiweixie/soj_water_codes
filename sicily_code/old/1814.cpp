#include <iostream>
#include <string>
using namespace std;
int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
class Date{
public:
	int yy,mm,dd;
}date;
string s_date;
int days1,days2;
bool isleap(Date a)
{
	return (a.yy%4==0&&a.yy%100!=0)||(a.yy%400==0);
}
int getdays(Date a)
{
	int ret=a.yy*365+(a.yy-1)/4-(a.yy-1)/100+(a.yy-1)/400;
	day[1]+=isleap(a);
	for(int i=0;i<a.mm-1;i++)
		ret+=day[i];
	day[1]=28;
	return ret+a.dd;
}
int main()
{
	//freopen("in.txt","r",stdin);
	int t;cin >> t;
	while(t--)
	{
		cin>> s_date;
		int temp=0;
		for(int i=0;i<4;i++)temp=temp*10+s_date[i]-'0';
		date.yy=temp;
		date.mm=(s_date[5]-'0')*10+s_date[6]-'0';
		date.dd=(s_date[8]-'0')*10+s_date[9]-'0';
		days1=getdays(date);
		cin>> s_date;
	    temp=0;
		for(int i=0;i<4;i++)temp=temp*10+s_date[i]-'0';
		date.yy=temp;
		date.mm=(s_date[5]-'0')*10+s_date[6]-'0';
		date.dd=(s_date[8]-'0')*10+s_date[9]-'0';
		days2=getdays(date);
		int ans = days2-days1;
		ans=ans>0?ans:-1*ans;
		cout << ans << endl;
	}
}
	