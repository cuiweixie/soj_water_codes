#include <iostream>
using namespace std;
const int N = 8;
int step[N*N] = {-1};
int chess[N][N] = {0};
int p =0;
bool canjump(int x,int y)
{
	if(x >=0&&y >= 0 && x < N && y < N && chess[x][y] == 0) 
		return true;
	return false;
}
int jump[8][2] = {2,1,1,2,-1,2,-2,1,-2,-1,-1,-2,1,-2,2,-1};
void print()
{
	for(int i=0;i<N*N;i++)
	{
		cout <<step[i] << " ";
		if((i+1)%N==0)cout << endl;
	}
	cout << endl;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout <<chess[i][j] << " ";
		}
		cout << endl;
	}
}

void backtrace(int t ,int x,int y)
{
	if(t >=N*N)
	{
		print();
		p++;
	}
	else
	{
		for(int i=0;i<8;i++)
		{
			if(canjump(x+jump[i][0],y+jump[i][1]))
			{
				x+=jump[i][0];
				y+=jump[i][1];
				chess[x][y] = t+1;
				step[t] = i;
				backtrace(t+1,x,y);
				chess[x][y] = 0;
			    x-=jump[i][0];
				y-=jump[i][1];
			}
		}
	}
}

int main()
{
	chess[0][0] = 1;
	backtrace(1,0,0);
	cout << p << endl;
}
		