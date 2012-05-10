#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string,string> check;
string name;int score;
int n , m;
string gScore(int score)
{
	if(score>=90&&score<=100)return "A";
	if(score>=80&&score<=89)return "B";
	if(score>=70&&score<=79)return "C";
	if(score>=60&&score<=69)return "D";
	if(score>=0&&score<=59) return "E";
	return "Score is error!";
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		cin >> n >>m;
		// initialize
		check.clear();
		for(int i=0;i<n;i++)
		{
			cin >> name;
			cin >>score;
			check[name] = gScore(score);
		}

		for(int i=0;i<m;i++)
		{
			cin >>name;
			cout << check[name] <<endl;
		}
	}
}
