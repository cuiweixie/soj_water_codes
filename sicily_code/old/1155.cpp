#include <iostream>
using namespace std;
int n,m;
bool road[210][210];
bool have_a_road[210];

void cal()
{
	for(int i=0;i<n;i++)
	{
		if(have_a_road[n-1]) return;
		else
		{
			for(int j=0;j<n;j++)
			{
				if(have_a_road[n-1]) return;
				if(have_a_road[j])
				{
					for(int k=1;k<n;k++)
					{
						if(road[j][k])
							have_a_road[k]=1;
					}
				}
			}
		}
	}
}

int main()
{
	while(cin >> n&&n!=0)
	{
		memset(road,0,sizeof(road));
		memset(have_a_road,0,sizeof(have_a_road));
		cin >> m;
		int x,y;
		
		for(int i=0;i<m;i++)
		{
			cin >> x >> y;
			road[x][y]=road[y][x]=true;
		}
		for(int i=0;i<n;i++)
			{
				road[i][i]=true;
				have_a_road[i]=road[0][i];
		}
		cal();
		if(have_a_road[n-1])
			cout <<"I can post the letter"<<endl;
		else
			cout <<"I can't post the letter"<<endl;
	}
}

