#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool is_stone[50000];
int stone[101];
int cal[50000];
int mins,maxs,stones,len;
void compress()
{
	memset(is_stone,0,sizeof(is_stone));
	sort(stone+1,stone+stones+1);
	int minus =0;
	int temp,i,bound = maxs*100;
	for(i=1;i<=stones;i++)
	{
		stone[i] -=minus;
		if((temp = stone[i]-stone[i-1]-bound)>maxs)
		{
			temp = (temp/maxs)*maxs;
			minus+=temp;
			stone[i]-=temp;
		}
		is_stone[stone[i]]=1;
	}

	len-=minus;
	if((temp = len -stone[stones] -bound) > maxs)
	{
		temp = (temp/maxs)*maxs;
		len -= temp;
	}
}

int dp()
{
	int minstones= 1000000;
	int tlen = len + maxs; int i,k, temp;
	for( i=1;i<mins;i++) cal[i] = minstones;
	for( i=mins;i<tlen;i++)
	{
		cal[i] = cal[i-mins] + is_stone[i];
		for( k=mins+1;k<=maxs&&i-k>=0;k++)
		{
			if((temp = cal[i-k]+is_stone[i]) <cal[i]) cal[i] = temp;
		}

	if(i>=len &&cal[i] <minstones)
		minstones = cal[i];
	}
	return minstones;
}

int main()
{
	cin >> len >> mins >> maxs >> stones;
	for(int i=1;i<=stones;i++)
		cin >> stone[i];
	if(maxs>=len)
		cout << "0"<< endl;
	else
	{
		compress();
		cout << dp() << endl;
	}
}





