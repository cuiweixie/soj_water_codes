#include <iostream>
#include <cstring>
using namespace std;
const int N =1001;
int lady[N][N],man[N][N],n,l_match[N],m_match[N];
void go(int i,int a)
{
	int l=man[i][a];
	if(l_match[l]==0){l_match[l]=i,m_match[i]=l;return ;}
	else
	{
		int current_parner=l_match[l];
		if(lady[l][current_parner]>lady[l][i])
		{
			l_match[l]=i;
			m_match[i]=l;
			m_match[current_parner]=0;
		}
		else return ;
	}
}
bool ok()
{
	for(int i=1;i<=n;i++)
		if(m_match[i]==0) return 0;
	return 1;
}
int main()
{
	freopen("in.txt","r",stdin);
	cin >> n;
	memset(l_match,0,sizeof(l_match));
	memset(m_match,0,sizeof(m_match));int t;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{  
			cin >> man[i][j];
		}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			cin >> t;lady[i][t]=j;
		}
		while(ok()==0)
	for(int i=1;i<=n;i++)
	{
		for(int a=1;a<=n;a++)
		{
			if(m_match[i]==0)
			{
			  go(i,a);
			}
		}
	}
	for(int i=1;i<=n;i++)cout<<m_match[i]<<endl;
}

