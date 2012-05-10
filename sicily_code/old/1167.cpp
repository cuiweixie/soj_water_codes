#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int count[256],n=0;
char c;
int main()
{
	freopen("in.txt","r",stdin);
	int t;
	cin>> t;
	scanf("%c",&c);
	for(int i=1;i<=t;i++)
	{
		memset(count,0,sizeof(count));
	    int take=0;
		while(scanf("%c",&c)&&c!='\n')
			count[c]++;
		while(scanf("%c",&c)&&c!='\n')
			count[c]--;
		for(int i='a';i<='z';i++)
			take+=(count[i]>0)?count[i]:-1*count[i];
		cout <<"Case #"<<i <<": "<<take << endl;
	}
}