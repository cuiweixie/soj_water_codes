#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
struct Node{
	int x,y;
	Node(int _x=0,int _y=0):x(_x),y(_y){}
};
bool board[500][500];
int n,m;
int state[500][500];
int cost[500][500];
bool canE(Node &a)
{
	if(a.x>=0&&a.x<n&&a.y>=0&&a.y<m&&state[a.x][a.y]==0)
		return true;
	return false;
}
int dx[4]={-1,1,0,0};
int dy[4]={0,0,1,-1};
Node start,des;
void dfs()
{
	stack<Node> sta;memset(state,0,sizeof(state));
	sta.push(start);
	state[start.x][start.y]=1;
	cost[start.x][start.y]=0;
	Node temp;
	while(!sta.empty())
	{
	      temp = sta.top();
		  state[temp.x][temp.y]=2;
		  bool increase=1;
		  for(int i=0;i<4;i++)
		  {
			  Node t =Node(temp.x+dx[i],temp.y+dy[i]);
			  if(canE(t))
			  {
				  if(board[temp.x][temp.y]==board[t.x][t.y])
				  {
				     sta.push(t);
				     state[t.x][t.y]=1;
					 cost[t.x][t.y]=cost[temp.x][temp.y];
					
					 if(t.x==des.x&&t.y==des.y) return ;
					 increase=0;
					  break;
				  }
			  }
		  }
		  if(increase) 
		  {
			 for(int i=0;i<4;i++)
		  {
			  Node t =Node(temp.x+dx[i],temp.y+dy[i]);
			  if(canE(t)&&board[temp.x][temp.y]!=board[t.x][t.y])
			  {
				     sta.push(t);
				     state[t.x][t.y]=1;
					 cost[t.x][t.y]=cost[temp.x][temp.y]+1;
					 break;
					 if(t.x==des.x&&t.y==des.y) return ;
					 increase=0;
			  }
			 }
		  }
	}
}
int main()
{
	while(cin >> n >> m)
	{
		char ch;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				cin >> ch;
				board[i][j] =(ch=='@');
			}
			cin >> start.x>>start.y>>des.x>>des.y;
			dfs();
			cout << cost[des.x][des.y]<<endl;
	}
}


