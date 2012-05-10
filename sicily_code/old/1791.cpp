#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Date{
	int year,month,day;
}date;
bool isleap(Date a)
{
	return (a.year%4==0&&a.year%100!=0)||(a.year%400==0);
}
int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
void addday()
{
     int tm=isleap(date);
	 day[1]+=tm;
	 date.day++;
	 bool t=date.day>day[date.month-1];
	 date.month+=t;
	 date.day=t?date.day-day[date.month-2]:date.day;
	 date.year+=(date.month>12);
	 date.month=(date.month>12)?1:date.month;
	 day[1]=28;
}
int weekday(Date a)
{
	int tm = a.month>=3?(a.month-2):(a.month+10);
	int ty = a.month>=3?a.year:(a.year-1);
	return (ty+ty/4-ty/100+ty/400+(int)(2.6*tm-0.2)+a.day)%7;
}

int main()
{
	int t;
	string str;
	cin >> t;
	while(t--)
	{
		cin >> str;
		date.month=(str[0]-'0')*10+(str[1]-'0');
		cin >> str;
		date.day =(str[0]-'0')*10+(str[1]-'0');
		cin >> str;
		date.year=(str[0]-'0')*1000+(str[1]-'0')*100+(str[2]-'0')*10+(str[3]-'0');
		for(int i=0;i<7;i++)
		{
			addday();
			if(weekday(date)==0)break;
		}
		cout <<setw(2)<<setfill('0')<< date.month <<" "<<setw(2)<<setfill('0')<<date.day <<" "<<setw(4)<<setfill('0')<<date.year<<endl;
	}
}
