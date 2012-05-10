#include <iostream>
#include <cstring>
using namespace std;
int state[65],step[65],start,count;
int dx[9]={2,1,-1,-2,-2,-1,1,2};
int dy[9]={1,2,2,1,-1,-2,-2,-1};
int next(int c)
{
	int a=(c-1)/8+1,b=(c-1)%8+1,x,y;
	int t=(a<=4)*2+(b<=4);
	switch(t)
	{
	case (0):
		for(int i=rand()%8,j=0;j<8;i=(i+1)%8,j++)
		{
			x=a+dx[i],y=b+dy[i];
			if(x>=1&&y>=1&&x<=8&&y<=8&&state[(x-1)*8+y]==0)
				return (x-1)*8+y;
		}
		break;
	case(1):
			for(int i=rand()%8,j=0;j<8;i=(i+1)%8,j++)
		{
			x=a+dx[i],y=b+dy[i];
			if(x>=1&&y>=1&&x<=8&&y<=8&&state[(x-1)*8+y]==0)
				return (x-1)*8+y;
		}
		break;
	case(2):
			for(int i=rand()%8,j=0;j<8;i=(i+1)%8,j++)
		{
			x=a+dx[i],y=b+dy[i];
			if(x>=1&&y>=1&&x<=8&&y<=8&&state[(x-1)*8+y]==0)
				return (x-1)*8+y;
		}
			break;
	case(3):
			for(int i=rand()%8,j=0;j<8;i=(i+1)%8,j++)
		{
			x=a+dx[i],y=b+dy[i];
			if(x>=1&&y>=1&&x<=8&&y<=8&&state[(x-1)*8+y]==0)
				return (x-1)*8+y;
		}
			break;
	}
}
void jump(int x)
{
	state[x]=1;
  step[count]=x;
  if(step[count]==step[count-1])
  {
	 int t=rand()%count+1;
	 count=t;
	 jump(step[t]);
  }
  count++;
  if(count==65)exit(0);
  jump(next(x));
}

int main()
{
	while(cin>>start&&start!=-1)
	{
		memset(state,0,sizeof(state));
		count=1;
		jump(start);
		for(int i=1;i<65;i++)
			cout <<step[i]<<" ";
		cout << endl;
	}
}