#include <iostream>
#include <cstring>
using namespace std;
int m1[100][100],m2[100][100],m3[100][100],n,m,L;
int main()
{
	freopen("in.txt","r",stdin);
  int q,x,y;
  cin >> n >> m >> L;
  memset(m1,0,sizeof(m1));
  memset(m2,0,sizeof(m2));
  for(int i=0;i<m;i++)
  {
	  cin >> x >> y;
	  m1[x-1][y-1]=++m2[x-1][y-1];
  }
  for(int i=0;i<L-1;i++)
  {
	  for(int j=0;j<n;j++)
		  for(int k=0;k<n;k++)
		  {
			  m3[j][k]=0;
			  for(int a=0;a<n;a++)
			  {
				  m3[j][k]+=m1[j][a]*m2[a][k];
			  }
		  }
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
				m1[j][k]=m3[j][k];
  }
  cin >> q;
  while(q--)
  {
	  cin >> x >> y;
	  cout << m1[x-1][y-1] << endl;
  }
}

