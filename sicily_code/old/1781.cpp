#include <iostream>
#include <queue>
using namespace std;

int dx[]={2,1,-1,-2,-2,-1,1,2};
int dy[]={1,2,2,1,-1,-2,-2,-1};

class Point{
public:
	int vis;
	int dis;
	Point(){vis = 0;dis = -1;
	}
};
queue<int> que;
int x,y;

Point p[501][501];

bool outOfRange(int x,int y,int & n)
{
	if(x<0||y<0||x>=n||y>=n) return true;
	else return false;
}

int main()
{
	int cases;
	int n;
	int begx,begy,endx,endy;
	cin >> cases;
	while(cases--)
	{
		cin >> n;
		cin >> begx >> begy >> endx >> endy;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				p[i][j].vis = 0; 
				p[i][j].dis = -1;
			}
		}
		while(!que.empty())que.pop();
		que.push(begx);que.push(begy);p[begx][begy].dis = 0;p[begx][begy].vis = 1;
		while(!que.empty())
		{
			x = que.front();
			que.pop();
			y = que.front();
	        que.pop(); p[x][y].vis = 2;
			if( x== endx&&y==endy)
			{
			    goto out;
			}
			for(int i=0;i<8;i++)
			{
				if(!outOfRange(x+dx[i],y+dy[i],n)&&p[x+dx[i]][y+dy[i]].vis == 0)
				{
				que.push(x+dx[i]);que.push(y+dy[i]);
				p[x+dx[i]][y+dy[i]].dis = p[x][y].dis+1;
				p[x+dx[i]][y+dy[i]].vis = 1;
				}
			}
		}
out:;
		cout << p[endx][endy].dis << endl;
	}
}

			
