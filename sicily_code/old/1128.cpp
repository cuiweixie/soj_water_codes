#include <iostream>
using namespace std;
char dice[6];
int state[3];
int count()
{
	int times=0;
	for(int i=0;i<5;i+=2)
	{
		if(dice[i]<dice[i+1])
		{
			times++;
			state[i/2]=dice[i+1]-dice[i];
		}
		else
			state[i/2]=dice[i]-dice[i+1];
	}
	for(int j=0;j<2;j++)
	for(int i=0;i<2;i++)
	{
		if(state[i]<state[i+1])
		{
			int temp = state[i];
			state[i] =state[i+1];
			state[i+1]=temp;
		    times++;
		}
	}

	return times;
}
int main()
{
	while(cin >> dice[0])
	{
	for(int i=1;i<6;i++)cin >> dice[i];
	if(count()%2)cout <<"right"<<endl;
	else 
		cout << "left"<<endl;
	}
}
