#include <iostream>
using namespace std;
int an[501], bn[501], cn[501],dn[501];
int a,b,c,d;
int main()
{
	cin >> a >> b >> c >> d;
	for(int i=1;i<=a;i++)
	{
		cin >> an[i];
	}
	for(int i=1;i<=b;i++)
	{
		cin >> bn[i];
	}
	for(int i=1;i<=c;i++)
	{
		cin >> cn[i];
	}
	for(int i=1;i<=d;i++)
	{
		cin >> dn[i];
	}

	for(int i=1;i<=a;i++)
		for(int j=1;j<=b;j++)
			for(int k=1;k<=c;k++)
				for(int l=1;l<=d;l++)
				{
					if(an[i]+bn[j]+cn[k]+dn[l] == 0)
					{
						cout << an[i] << " " << bn[j] << " " << cn[k] << " "<< dn[l] << endl;
						goto out;
					}
				}
out:;
}
