#include <iostream>
#include <algorithm>
using namespace std;
struct Party{
	int start,end;
}party[100];
bool cmp(Party a,Party b)
{
	return a.end<b.end;
}
int n;
int main()
{
	int i=1;
	while(cin >> n&&n!=0)
	{
		for(int i=0;i<n;i++)
			cin >> party[i].start>>party[i].end;
		sort(party,party+n,cmp);
		int count =1;
		int first_end=party[0].start+1;
		int first_start=party[0].start;
		for(int i=1;i<n;i++)
		{
			if(party[i].end-1>=first_end)
			{
				first_end++;
				count++;
			}
			else
			{
				if(party[i].start<first_start)
				{
					count++;
					first_start--;
				}
			}
		}
		cout << "On day "<<i<<" Emma can attend as many as "<<count<<" parties."<<endl;
		i++;
	}
}
