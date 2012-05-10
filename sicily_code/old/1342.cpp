#include <iostream>
using namespace std;

int m[25][30000];

int w[25]; int v[25];

int main()
{
   int N,n;
   while(cin >> N >> n)
   {
	   for(int i=1;i<=n;i++)
	   {
		   cin >> w[i] >> v[i];
		   v[i] = w[i]*v[i];
	   }

	   for(int i=1;i<=N;i++)
	   {
		   if(i<w[1])
		   m[1][i] = 0;
		   else
			   m[1][i] = v[1];
	   }

	   for(int i=2;i<= n;i++)
	   {
		   for(int j =1;j<=N;j++)
		   {
              if(j<w[i])
				  m[i][j] = m[i-1][j];
			  else if(j == w[i])
				  m[i][j] = (m[i-1][j] > v[i])?m[i-1][j]:v[i];
			  else
				  m[i][j] = (m[i-1][j] >( m[i-1][j -w[i]]+v[i]))?m[i-1][j]:(m[i-1][j -w[i]]+v[i]);
		   }
		

	   }

	   cout << m[n][N] << endl;
   }
}  