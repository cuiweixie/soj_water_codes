#include <iostream>
#include <string>
#include <cstring>
#include <queue>
using namespace std;
int n,m;
int deq[100001];
char ch;
int main()
{
	freopen("in.txt","r",stdin);
	while(cin >> n >> m)
	{
		if(n==0)return 0;
		memset(deq,0,sizeof(deq));
		while(m--)
		{
			int a=0, b=0,c=0;
			cin >> ch;
			if(ch=='I')
			{
				cin >>a>> b >> c;
				for(int i=a;i<=b;i++)deq[i]+=c;
			}
			else
			{
				cin >> a >> b;
				int maxx=-1,index;
				for(int i=a;i<=b;i++)
				{
					if(deq[i]>maxx){
						maxx=deq[i];
						index=i;
					}
				}
				cout << maxx << endl;
				deq[index]=0;
			}
		}
	}
}
