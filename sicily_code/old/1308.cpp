#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
	vector<int> vec[10005];
int color[10005];
	vector<int> v;
	void getNum(string &str)
	{
		v.clear();
		str= str+" ";
		int n(0);
		for(int i=0;i<(int)str.length();i++)
		{
			if(str[i] != ' ')
			{
				n = n*10+str[i] - '0';
			}
			else {
				v.push_back(n);
				n = 0;
			}
		}
	}

		   

int main()
{
   
	int N,M; string str;
	while( getline(cin,str))
	{
		getNum(str);
		N = v[0];
		if(v[0] == 0) return 0;
		M = v[1];
	
		for(int i = 0;i<N;i++)
		{
			color[i+1] = 0;
			getline(cin,str);
			getNum(str);
			for(int j = 0;j <(int)v.size();j++)
			{
				vec[i+1].push_back(v[j]);
			}
		}
	    	// bfs
			queue<int> que;
			que.push(M);
			int node,_time_used(0);
			while(!que.empty())
			{
				node = que.front();
				color[node] = 2;
				_time_used += vec[node].at(0);
				que.pop();
				for(int i =1;i<(int)vec[node].size();i++)
				{
					if(color[vec[node].at(i)] == 0)
						que.push(vec[node].at(i));
				}
			}

			cout << _time_used << endl;
	}
}

			

			
					
