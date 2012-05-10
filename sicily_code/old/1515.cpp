#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int mode[3][4];
int state[87654322];
int path[87654322];
int des,max_path;
char road[1000];
void A()
{
	int temp = mode[1][1];
	mode[1][1]= mode[1][4];
	mode[1][4]=temp;
	temp = mode[2][1];
	mode[2][1]=mode[2][4];
	mode[2][4]=temp;
}
void B()
{
	for(int i=1;i<=2;i++)
	{
		int temp =mode[i][1];
		for(int j=2;j<=4;j++)
			mode[i][j-1]=mode[i][j];
		mode[i][4] = temp;
	}
}
void C()
{
	int a = mode[1][2],b=mode[1][3],c=mode[2][2],d=mode[2][3];
	mode[2][2] =a;mode[2][3]=c;mode[1][2]=b;mode[1][3]=d;
}
void get_mode(int n)
{
	for(int i=1;i<=2;i++)
		for(int j=1;j<=4;j++)
		{
			mode[i][j] = n%10;
			n/=10;
		}
}

int get_n()
{
	int n=0;
	for(int i=2;i>=1;i--)
	for(int j=4;j>=1;j--)
		{
		   n= n+10*mode[i][j];
		}
	return n;
}

int main()
{
	while(cin >> max_path&&max_path!=-1)
	{
		memset(state,0,sizeof(state));
		for(int i=1;i<=2;i++)
			for(int j=1;j<=4;j++)
				cin >> mode[i][j];
		des = get_n();
		path[des] =-1;
		queue<int> que; 
		que.push(87654321);
	    state[87654321]=1;
		path[87654321]=0;
		queue<char> ans;
		while(!que.empty())
		{
			int p = que.front();que.pop();
			state[p] = 2;
			int temp;
			if(path[p] <=max_path)
			{
			   get_mode(p);
			   A();
			   temp=get_n();
			   if(state[temp]==0)
			   {
				   que.push(temp);
				   ans.push('A');
				   if(temp==des) goto out;
				   state[temp]=1;
				   path[temp] = path[p]+1;
			   }
			   A();
			   B();
			   temp=get_n();
			      if(state[temp]==0)
			   {
				   que.push(temp);
				   ans.push('B');
				   if(temp==des) goto out;
				   state[temp]=1;
				   path[temp] = path[p]+1;
			   }
              B();B();B();
			  C();
			   temp=get_n();
			   if(state[temp]==0)
			   {
				   que.push(temp);
				   ans.push('C');
				   if(temp==des) goto out;
				   state[temp]=1;
				   path[temp] = path[p]+1;
			   }
			}
			else break;
		}
out:;
		if(path[des]!=






		

