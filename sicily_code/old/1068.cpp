#include <iostream>
#include <cstring>
#include <iomanip>
#include <algorithm>
using namespace std;
unsigned int v[7],kind[7][101],t;
int main()
{
	freopen("in.txt","r",stdin);
	cin >> t;
	while(t--)
	{
		for(int i=1;i<=6;i++)cin>>v[i];
		for(int i=1;i<=100;i++)kind[1][i]=i,kind[0][i]=0;
		for(int i=2;i<=6;i++)
		{
			for(int j=1;j<v[i];j++)kind[i][j]=kind[i-1][j];
			for(int j=v[i];j<=100;j++)
			{
			   
				kind[i][j]=min(kind[i-1][j],kind[i][j-v[i]]+1)
			}
		}
		unsigned int sum=0,maxx=0;
		for(int i=1;i<=100;i++)
			sum+=kind[6][i],maxx=maxx>kind[6][i]?maxx:kind[6][i];
		double average=(double)sum/100;
		cout <<fixed<<setprecision(2)<<average <<" "<<maxx << endl;
	}
}

