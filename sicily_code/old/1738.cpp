#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Team{
	int id,score,penalty;
};
bool cmp(Team a,Team b)
{
	if(a.score == b.score)
		return a.penalty < b.penalty;
	else
		return a.score>b.score;
}
int n,testcase;
vector<Team> vec;
int main()
{
	Team temp;
	cin >> testcase;
	while(testcase--)
	{
		cin >> n;
		while(n--)
		{
		 cin >> temp.id >> temp.score >> temp.penalty ;
		 vec.push_back(temp);
		}
		sort(vec.begin(),vec.end(),cmp);
        int len = vec.size();
		for(int i=0;i<len-1;i++)
			cout << vec[i].id<<" ";
		cout << vec[len-1].id << endl;
		vec.clear();
	}
}
		
