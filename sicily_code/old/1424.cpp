#include <iostream>
#include <list>
#include <vector>
using namespace std;

class Node{
public:
	int indegree;
	int ward;
	vector<int> successor;
	bool done;
	bool create_by_i;
	Node()
	{
		indegree =0;
		ward =100;
		done = false;
		create_by_i = false;
	}
};


int main()
{
	int n,m;
	while(cin >> n >> m)
	{
	vector<Node> worker(n);
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin >> a >> b;

		a--;b--;
		worker[b].successor.push_back(a);
		worker[a].indegree++;
	}

    for(int k =0;k<n;k++)
	{
	for(int i=0;i<n;i++)
	{
		if(worker[i].indegree == 0&& worker[i].create_by_i == 0)
		{
              for(int j=0; j< (int)worker[i].successor.size();j++)
			  {
				  if(worker[worker[i].successor.at(j)].done == false)
				  {
				  worker[worker[i].successor.at(j)].ward = worker[i].ward+1;
				  worker[worker[i].successor.at(j)].done = true;
				  }

				  worker[worker[i].successor.at(j)].indegree--;
				  worker[worker[i].successor.at(j)].create_by_i  =1;
			  }
			  worker[i].indegree=-1;
		}
	}
	
	for(int x=0;x<n;x++)
	{
		worker[x].done = false;
		worker[x].create_by_i = false;
	}
	}

	int count =0;
	for(int i=0;i<n;i++)
	{
		if(worker[i].indegree == -1)
			count += worker[i].ward;
		else
		{
			cout << "Poor Xed"<<endl;
		    goto out;
		}

	}
	cout << count << endl;
out:;
	worker.clear();
	}
}






