#include <iostream>
using namespace std;
int f[101][101];
int num[101];
void done()
{
	for(int i=1;i<=100;i++)
	{
		for(int j=1;j<=100;j++)
			f[i][j]=0;
	}
	for(int i=5;i<=100;i++)
	{
		f[i][i]=1;
		for(int j=5;j<=i/2;j++)
		{
			for(int k=j;k<=i-j;k++)
				f[i][j]+=f[i-j][k];
		}
	}
    for(int i=5;i<=100;i++)
	{
		num[i]=0;
		for(int j=5;j<=i;j++)
			num[i]+=f[i][j];
	}
}

int main()
{
	int n;done();
	while(cin >> n)
		cout << num[n]<<endl;
}