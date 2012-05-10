#include <stdio.h>
#define N 100000001
int is_prime[N];
int prime[N];
int cc=0;
void linear_prime_table()
{
	int i;
	for(i=0;i<N;i++)is_prime[i]=1;
	for(i=2;i<N;i++)
	{
		int j;
		if(is_prime[i])
			prime[cc++]=i;
		for(j=0;j<cc;j++)
		{
			int k=prime[j]*i;
			if(k<=N&&k>0)is_prime[k]=0;
			else break;
			if(i%prime[j]==0)break;
		}
	}
}
int main()
{
	linear_prime_table();
	printf("%d",cc);
	return 0;
}
