#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;
int n;
class Edge{
public:
	int i,j;
	int dis;
	Edge(int _i=0,int _j=0,int _dis=0):i(_i),j(_j),dis(_dis){}
};
 bool cmp(Edge a,Edge b)
	{
		return a.dis < b.dis;
	}

int set[510];
int ans; bool is_first=1;
int findSet(int i)
{
	if(set[i] == i) return i;
	else return findSet(set[i]);
}
void setUnion(int i,int j)
{
	set[findSet(j)] = findSet(i);
}

void done(int n)
{
	for(int i=1;i<=n;i++)set[i] = i; 
	ans = 0;
	vector<Edge> pri_que;
	int d;
	for(int i=1;i<=n;i++)
	  for(int j=1;j<=n;j++)
	  {
		  if(i>=j) cin >> d;
		  else
		  {
			  cin >> d;
			  Edge a;
			  a.i=i;
			  a.j=j;
			  a.dis=d;
			  pri_que.push_back(a);
		  }
	  }
	  sort(pri_que.begin(),pri_que.end(),cmp); Edge a;int ans=0;int count=0;
	  for(int i=0;i<pri_que.size();i++)
	  {
		  a=pri_que[i];
		  if(findSet(a.i)!=findSet(a.j))
		  {
			  setUnion(a.i,a.j);
			  if(ans < a.dis) ans = a.dis;
		      count++;
		  }
		  if(count ==n-1) break;
	  }
	  cout << ans << endl;
}

int main()
{
	int test;bool is_first =1;cin >> test;
	while(test--)
	{
		if(is_first) 
		{
			is_first = 0;
		}
		else
			cout << endl;
		cin >> n;
		done(n);
	}
}
      
