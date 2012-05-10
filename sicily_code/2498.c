#include <stdio.h>
#define N 10000000
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
void print(int n)
{
	if(is_prime[n]){
		printf("%d ",n);
		return;
	}
	int i;
	for(i=0;i<cc;i++)
	{
		while(n%prime[i]==0)
		{
			n=n/prime[i];
			printf("%d ",prime[i]);
		}
	}
}
int main()
{
 linear_prime_table();
 int t;
 scanf("%d",&t);
 while(t--)
 {
	 int n;
	 scanf("%d",&n);
	 print(n);
	 printf("\n");
 }
 return 0;
}
