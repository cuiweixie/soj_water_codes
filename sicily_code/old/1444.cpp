#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
const int N = 10000;
bool is_prime[N]={1};
int path[10000];
int state[10000];
int prime[N]={0};
void get_prime()
{
	memset(is_prime,1,sizeof(is_prime));
	for(int i=2;i<N;i++)
	{
		if(is_prime[i])prime[++prime[0]]=i;
		for(int j=1;j<=prime[0]&&i*prime[j]<N;j++)
		{
			is_prime[i*prime[j]] = false;
			if(i%prime[j]==0) break;
		}
	}
}

int main(){
	get_prime();
	int test;
	int s,e; cin >> test;
	while(test--)
	{
		cin >> s >> e;
		for(int i=1000;i<10000;i++){path[i]=-1;state[i]=0;}
	    int count =0;
		queue<int> que;
		que.push(s);
		state[s] = 1;
		path[s] = 0;
		while(!que.empty())
		{
			int s = que.front();
			state[s] = 2;
			que.pop();
			//extension node s
			int digit[4]; int temp=s;

			for(int i=3;i>=0;i--)
			{
				digit[i] = temp%10;
				temp=temp/10;
			}
			for(int i=0;i<=3;i++)
			{
				for(int j=1;j<=9;j++)
				{
					digit[i]=(digit[i]+1)%10;
					if(i==0&&digit[0]==0) continue;
					temp = digit[0]*1000+digit[1]*100+digit[2]*10+digit[3];
					if(is_prime[temp]&&state[temp]==0)
					{
						path[temp] = path[s]+1;
					    que.push(temp);
						state[temp]=1;
					}
				}
				digit[i]=(digit[i]+1)%10;
			}
		}

		if(path[e]==-1) cout << "Impossible"<<endl;
		else 
			cout << path[e] <<endl;
	}
}



				



		  
				

