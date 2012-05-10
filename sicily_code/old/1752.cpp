#include <iostream>
#include <cstring>
using namespace std;
const int N=1000001;
int prime[N];
bool is_prime[N];
void get_prime()
{
	memset(is_prime,1,sizeof(is_prime));
	prime[0]=0;
	for(int i=2;i<N;i++)
	{
		if(is_prime[i])prime[++prime[0]]=i;
		for(int j=1;j<=prime[0]&&i*prime[j]<N;j++)
		{
				is_prime[i*prime[j]]=0;
				if(i%prime[j]==0) break;
	}
	}
}

int _rank[N];
void get_rank()
{
	for(int i=1;i<=prime[0];i++)
		_rank[prime[i]]=i;
}

int main()
{
	get_prime();
	get_rank();
	int n;
	while(cin >> n&&n!=-1)
		cout <<_rank[n]<<endl;
}