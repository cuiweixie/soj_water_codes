#include <iostream>
using namespace std;
int pass[30][30][31];
int ans[31][31];
int n,m;
void cal_n(int n)
{
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++)
	   {
		   if((i +1)%n==j||(i-1+n)%n == j)
		       pass[i][j][1] = 1;
		   else 
			   pass[i][j][1] = 0;
	   }

	for(int i=2;i<=30;i++)
	{
        for(int j=0;j<n;j++)
	   for(int k=0;k<n;k++)
	   {
		  pass[j][k][i] = pass[j][(k+1)%n][i-1]+pass[j][(k-1+n)%n][i-1];
	   }
	}
	for(int i=3;i<=30;i++)
		ans[n][i] = pass[0][0][i];
}

void done()
{
	for(int i=3;i<31;i++)
		cal_n(i);
}

int main()
{
	done();
	while(cin >> n >> m)
		cout << ans[n][m] << endl;
}
		

