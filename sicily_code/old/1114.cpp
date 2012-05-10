#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

bool square[110][110][110];
bool bfs_flag[110][110][110];
int dx[6]={-1,1,0,0,0,0};
int dy[6]={0,0,1,-1,0,0};
int dz[6]={0,0,0,0,-1,1};
struct Point{
	int x,y,z;
	Point(int a=0,int b=0,int c=0):x(a),y(b),z(c){}} temp,p;
	queue<Point> que;
bool in_range(int x)
	{
		return x>=0&&x<=101;
	}
void bfs(int x,int y,int z)
{
	que.push(Point(x,y,z));
	bfs_flag[x][y][z]=true;
	while(!que.empty())
	{
		temp = que.front();
		que.pop();
		bfs_flag[temp.x][temp.y][temp.z]=1;
		for(int i=0;i<6;i++)
		{
			p.x=temp.x+dx[i];
			p.y=temp.y+dy[i];
			p.z=temp.z+dz[i];
			if(in_range(p.x)&&in_range(p.y)&&in_range(p.z)\
				&&!square[p.x][p.y][p.z]&&!bfs_flag[p.x][p.y][p.z])
			{
				que.push(p);
				bfs_flag[p.x][p.y][p.z]=true;
			}
		}
	}
}

int main()
{
	int x,y,z;
	int t,n;
	cin >> t;
	while(t--)
	{
		memset(square,0,sizeof(square));
		memset(bfs_flag,0,sizeof(bfs_flag));
		cin >>n;
		while(n--)
		{
			cin >> x >> y >> z;
			square[x][y][z] =true;
		}
		int ans=0;
		for(int i=1;i<=101;i++)
			for(int j=1;j<=101;j++)
				for(int k=1;k<=101;k++)
				{
					if(!bfs_flag[i][j][k]&&!square[i][j][k])
					{
					bfs(i,j,k);
					ans++;
					}
				}
	cout << ans-1 << endl;
	}
}
      