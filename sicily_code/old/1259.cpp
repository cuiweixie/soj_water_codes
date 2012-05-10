#include <iostream>
#include <cstring>
using namespace std;
const int N =10001;
 int prime[N];
bool isPrime[N];
void getPrime()
{
	memset(isPrime,1,sizeof(isPrime));
	prime[0] = 0;
	for( int i=2;i<N;i++)
	{
		if(isPrime[i])prime[++prime[0]] = i;
		for(int j =1;j<=prime[0]&&i*prime[j]<=N;j++)
		{
			isPrime[i*prime[j]] = 0;
			if(i%prime[j]==0)break;
		}
	}
}
int sum[1500];
int count[10001];
void done()
{
      memset(count,0,sizeof(count));
	  sum[0] =0;
	  for(int i=1;i<=prime[0];i++)
		  sum[i] = sum[i-1]+prime[i];
	  int temp;
	  for(int i=1;i<=prime[0];i++)
	  {
		  for(int j=i;j<=prime[0];j++)
		  {
			  temp = sum[j]-sum[i-1];
			  if(temp <=10000)
			  count[temp]++;
			  else break;
		  }
	  }
}
	
int main()
{
	getPrime();
    done();
	int n;
	while(cin >> n)
	{
		if(n==0) return 0;
		cout << count[n] << endl;
	}
}


