#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int arr[300001];
int father[300001];
int count[300001];

void initialization(int n,int k)
{
   vector<vector<int> > node(n+1);
	vector<int> color(n+1);
	for(int i=0;i<n-1;i++)
	{
		int j,k;
		cin>> j >>k;
		node[i].push_back(j);
		node[j].push_back(i);
		color[i] =0;
	}
	color[n-1] = color[n] =0;
	
	// bfs to initializate the tree array
	queue<int> que;
	que.push(1);
	color[1] = 1;
	int f; father[1] =0; int done = 1;
	while(!que.empty()&&done!= n)
	{
	  f=que.front();
	  que.pop();
	  color[f] = 2;
	  for(int i= 0;i<node[f].size();i++)
	  {
		  if(color[node[f].at(i)] == 0)
		  {
			  que.push(node[f].at(i)];
			  color[node[f].at(i)] = 1;
			  father[node[f].at(i)] = f;
			  done++;
		  }
	  }
	}
      count[1] = 1;
	for(int i=1;i<=n;i++)
	{
		int j = i;
		while(father[j] != 0)
		{
			count[j]++;
			j = father[j];
		}
	}

}







	
     


	   


	    
         



