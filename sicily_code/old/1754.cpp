#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

struct Point{

	int time;
	bool vis;
} p[1001][1001];
queue<int> qD;
queue<int> qP;
int n,m;
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
bool outOfRange(int x,int y)
{
	return  x>=0&&y>=0&&x<n&&y <m;
}

void dfsD()
{
	int s;
	s= qD.front();
	