#include <iostream>
#include <algorithm>
using namespace std;
struct Student{
	int chinese;
	int math;
	int english;
	int total_score;
	int number;
};
Student student[1000];
int n;
bool cmp(Student A,Student B)
{
	if(A.total_score > B.total_score) return true;
	else if(A.total_score == B.total_score)
	{
		if(A.chinese > B.chinese) return true;
		else if (A.chinese == B.chinese) 
		{
			if(A.number < B.number) return true;
			else return false;
		}
		else return false;
	}
	else 
		return false;
}

int main()
{
	int t=0;
	while(cin >> n)
	{
		if(t++>0) cout<< endl;
		for(int i=1;i<=n;i++)
		{
			cin >> student[i].chinese >> student[i].math >> student[i].english;
			student[i].number = i;
			student[i].total_score = student[i].chinese+student[i].math+student[i].english;
		}
		sort(student+1,student+n+1,cmp);
		for(int i=1;i<=5;i++)
		{
			cout << student[i].number << " " << student[i].total_score << endl;
		}
	}
}

