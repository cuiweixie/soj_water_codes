#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Bank{
public:
	bool hack;
	bool open;
	vector<int> key;
	Bank()
	{
		hack = false;
		open = false;
	}
};

int main()
{
	int hackNum(0);
	Bank bank[1000000];
	int n; while(cin >> n){

		for(int i=0;i<n;i++)
		{
			int loc;
			cin >> loc;
			loc--;
			bank[loc].key.push_back(i);
		}

		
		for(int i=0;i < n;i++)
		{
			if(bank[i].open == false)  // then hack in
			{
				hackNum++;
				bank[i].hack = true;
				bank[i].open = true;
				if(!bank[i].key.empty()){
				queue<int> bfs;   // bfs the bank[i]
				for(int j = 0;j < bank[i].key.size();j++)
					bfs.push(bank[i].key.at(j));
				while(!bfs.empty())
				{
					int k = bfs.front(); 
					bank[k].open = true;
					if(k == i) 
					{
					
						bfs.pop();
						goto out;
					}
					
					if(bank[k].hack == true&&k != i)
					{
						hackNum--;
						bfs.pop();
				
					}else
					bfs.pop();  // pop out the first one
					for(vector<int>::iterator scan = bank[k].key.begin();scan !=bank[k].key.end();scan++)
					{
						if(bank[(*scan)].hack == true&& *scan != i)
						{
							hackNum--;
						}
						else if(*scan == i) bfs.pop();
						else {
						    bfs.push(*scan);
							bank[*scan].open = true;
						}
					}
out:;
				}
				}
			}
		}
		cout << hackNum << endl;
	}

}



