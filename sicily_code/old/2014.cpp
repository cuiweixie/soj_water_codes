#include <iostream>
#include <cstring>
using namespace std;
int cash,n;
int f[9][310];
int c[9];
int main()
{
	cin >> cash>>n;
	for(int i=1;i<=n;i++){cin >> c[i];f[i][0]=1;}
	f[0][0]=1;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=cash;j++)
		{
			int t = j/c[i];int temp =0;
			for(int l=0;l<=t;l++)
			{
				temp+=f[i-1][j-l*c[i]];
			}
			f[i][j] = temp;
		}
			
			
		cout << f[n][cash]<<endl;
}