#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
using namespace std;

long long int prime[500000];
bool isPrime[1000001];
void getPrime()
{
	memset(isPrime,1,sizeof(isPrime));
	prime[0] = 0;
	for(long long int i=2;i<1000000;i++)
	{
		if(isPrime[i])prime[++prime[0]] = i;
		for(long long int j =1;j<=prime[0]&&i*prime[j]<=1000000;j++)
		{
			isPrime[i*prime[j]] = 0;
			if(i%prime[j]==0)break;
		}
	}
}

string str;
int  L;
int len;
int num[50];
void initialized()
{
	len = (str.length()-1)/3+1;
	memset(num,0,sizeof(num));
	if(str.length()%3==0)
	{
		for(int i=0;i<len;i++)
			for(int j=i*3,k=0;k<3;k++,j++)
			{
				num[i]=num[i]*10+str[j]-'0';
			}
	}
	else
	{
		int first_index=str.length()%3-1;
		for(int i=0;i<=first_index;i++)
		{
			num[0] = num[0]*10+str[i]-'0';
		}
		for(int i=1;i<len;i++)
		{
			for(int j=first_index+(i-1)*3+1,k=0;k<3;k++,j++)
			{
				num[i]=num[i]*10+str[j]-'0';
			}
		}
	}
}
	


int mod(const int &prime)
{
	int x = 1000%prime;
	int res=num[0];
	for(int i=1;i<len;i++)
	{
		res = (res*x+num[i])%prime;
	}
	res=res%prime;
    return res;
}
void littleNum()
{
	long long int K =0;
	for(int i=0;i<str.length();i++)
		K = K*10+str[i]-'0';
	int ans =0;
	for(int i=1;prime[i]<L;i++)
	{
		if(K%prime[i] ==0)
		{
			ans = prime[i];
			break;
		}
	}
	if(ans ==0)
		cout << "GOOD"<<endl;
	else
		cout << "BAD "<< ans << endl;
}

int main()
{
	getPrime();
	while(cin >>str >> L)
	{
		if(str == "0") return 0;
		initialized();
		L++;
		if(str.length()<19)
			littleNum();
		else
		{
		int ans =0; int temp;
		for(int i=1;prime[i]<L;i++)
		{
			temp = mod(prime[i]);
			if(temp == 0)
			{
				ans = prime[i];
				break;
			}
		}
		if(ans==0)
			cout<<"GOOD"<<endl;
		else
			cout<<"BAD "<< ans << endl;
		}
	}
}


			



		






