#include <iostream>
#include <cstring>
using namespace std;
const int  N = 1000;
int a[N],b[2*N],c[2*N],d[2*N],n;
void Try(int i)
{
	int j;
	for(j=1;j<=n;j++)
	{
		if(b[j] == 0&&c[i+j] == 0&&d[i-j+n] == 0)
		{
			a[i] = j;
			b[j] =1;
			c[i+j]=1;
			d[i-j+n]=1;
			if(i<n)
				Try(i+1);
			else 
			{
				for(int i=1;i<=n;i++)
					cout << a[i] <<" ";
				cout << endl;
			}
			b[j] = 0; c[i+j] = 0;d[i-j+n] = 0;
		}
	}
}

int main()
{
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	memset(d,0,sizeof(d));
	while(cin >> n&&n!=0)
	{
		Try(1);
	}
}

