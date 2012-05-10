#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;
struct Time{
    int hh,mm;
    int get(){return hh*60+mm;}
	void int2time(int a)
	{
		if(a==1440)a--;
		if(a%60==0) hh=a/60,mm=0;
		else
		{
			hh=a/60,mm=a%60;
		}
	}
}_Start,_end;
string s,e;
int n;
Time str2time(string &str)
{
    Time temp;
    temp.hh=(str[0]-'0')*10+str[1]-'0';
    temp.mm=(str[3]-'0')*10+str[4]-'0';
    return temp;
}

bool minute[1440];
int main()
{
    freopen("in.txt","r",stdin);
    while(cin>>n&&n!=0)
    {
        memset(minute,1,sizeof(minute));
        while(n--)
        {
        cin >>s>>e;
        _Start=str2time(s),_end=str2time(e);
        int a=_Start.get(),b=_end.get();
        for(int i=a;i<=b;i++)
            minute[i]=0;
        }
        int ma=0,mb=0;
        int a=0,b=0;
        bool start=1;
        for(int i=0;i<1440;)
        {
            if(minute[i]==1)
            {
                a=i;
                while(minute[i]&&i<1440)i++;
                b=i;
                if(b-a>mb-ma)
                    mb=b,ma=a;
            }
            else
                i++;
        }
		if(ma!=0)ma--;
		if(mb==1440)mb--;
		bool ok=0;for(int i=0;i<1440;i++)if(minute[i]==1)ok=1;
		if(!ok) cout <<"Poor Hengheng"<<endl;
        else
        cout <<setfill('0')<<setw(2)<<ma/60<<":"<<setw(2)<<ma%60<<" "<<\
        setfill('0')<<setw(2)<<mb/60<<":"<<setw(2)<<mb%60<<endl;
    }
}
        

