#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;

string des(8,'0');
class State{
public:
	string state;
	string road;
} state;
void swap(int &a,int &b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}
void A(State &s)
{
	for(int i=0;i<4;i++)swap(s.state[i],s.state[i+4]);
}
void B(State &s)
{
	char temp=s.state[3];
	for(int i=3;i>=1;i--)s.state[i]=s.state[i-1];
	s.state[0]=temp;
	temp=s.state[7];
	for(int i=7;i>=5;i--)s.state[i]=s.state[i-1];
	s.state[4]=temp;
}
void C(State &s)
{
	swap(s.state[1],s.state[5]);
	swap(s.state[5],s.state[6]);
	swap(s.state[6],s.state[2]);
}
bool getIt(State &s)
{
	for(int i=0;i<8;i++)
		if(s.state[i]!=des[i])return 0;
	return 1;
}
int main()
{
	freopen("in.txt","r",stdin);
	int n;
	while(cin>>n&&n!=-1)
	{
		string s(8,'0');
		state.state=s;
		for(int i=0;i<8;i++)
			{
				cin>>des[i];
				state.state[i]='0'+i+1;
		}
        for(int i=7,j=5;i>=4;i--,j++)state.state[i]='0'+j;
	queue<State> que;
	que.push(state);
	while(1)
	{
		state =que.front();
		if(getIt(state))
		 break;
		if(state.road.length()>n)
		{
			state.state[0]='-1';
			break;
		}
		que.pop();
		State temp=state;
		A(temp);
		temp.road+='A';
        if(getIt(temp))
			{
				state=temp;
		        break;
		}
		que.push(temp);
		temp=state;
		B(temp);
		temp.road+='B';
		   if(getIt(temp))
			{
				state=temp;
		        break;
		}
		que.push(temp);
		temp=state;
		C(temp);
		temp.road+='C';
		   if(getIt(temp))
			{
				state=temp;
		        break;
		   }
		que.push(temp);
	}
	if(state.state[0]=='-1')cout <<-1<<endl;
	else
		cout << state.road.length()<<" "<<state.road<<endl;
	while(que.empty()==0)que.pop();
	state.road.clear();
	}
}


