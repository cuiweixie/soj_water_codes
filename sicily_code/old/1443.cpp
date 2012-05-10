#include <iostream>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;
struct Job{
	int pos;
	int p;
	Job(int a=-1,int b=-1):pos(a),p(b){}
	bool operator>(const Job & X) const
	{
		return p > X.p;
	}
}job[101];
int job_num;
bool is_bigest(deque<Job> & deq)
{
	bool ans = true;
	for(int i=1;i<deq.size();i++)
	{
		if(deq[i] > deq[0]){
			ans = false;
			break;
		}
	}
	return ans;
}
int my_job_pos,my_job_p;
int minus;

void get_ans()
{
	deque<Job> deq1;
	deque<Job> deq2;
	my_job_p = job[my_job_pos].p;
	
  for(int i=0;i<job_num;i++)
    deq1.push_back(job[i]);
  while(deq1.empty()!=1)
  {
	  Job temp = deq1.front();
	  if(is_bigest(deq1))
	  {
		  deq1.pop_front();
		  deq2.push_back(temp);
	  }
	  else
	  {
		  deq1.pop_front();
		  deq1.push_back(temp);
	  }
  }
  int ans=0;
  for(int i=0;i<deq2.size();i++)
  {
	  if(deq2[i].pos==my_job_pos)
		  {
			  ans = i;
			  break;
	  }
  }
	 
  cout << ans+1 << endl;

}


int main()
{
	int test;cin >> test;
	while(test--)
	{
		cin >> job_num>>my_job_pos;
		for(int i=0;i<job_num;i++)
		{
			cin >> job[i].p;
			job[i].pos=i;
		}
		get_ans();
	}
}