#include <iostream>
#include <cstring>
using namespace std;
int m[2000][1000],p0x,p0y,p1x,p1y;
int main()
{
	//freopen("in.txt","r",stdin);
	int n;cin >> n;
	while(n--)
	{
	   int d;
	   cin >> d;
	   memset(m,0,sizeof(m));
	   while(d--)
	   {
		   cin >> p0x>>p0y>>p1x>>p1y;
		   p1x+=p0x;
		   p1y+=p0y-1;
		   for(int i=p0y;i<=p1y;i++)
		   {
			   m[p0x][i]+=1;
			   m[p1x][i]+=-1;
		   }
	   }
	   int flag,count;flag=count=0;
	   for(int i=0;i<1000;i++)
	   {
		   flag =0;
		   for(int j=0;j<2000;j++)
		   {
			   flag+=m[j][i];
			   if(flag>0)
				   count++;
		   }
	   }
	   cout << count << endl;
	}
}
