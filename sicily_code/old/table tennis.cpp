#include <iostream>
using namespace std;

bool isBig(int x,int y)
{
	if((x-30)*(x-30) + (y-30)*(y-30) <400)
		return true;
	else return false;
}

bool isMiddle(int x,int y)
{
	if((x-100)*(x-100) + (y-30)*(y-30) < 100)
		return true;
	else return false;
}

bool isSmall(int x,int y)
{
	if((x-170)*(x-170) + (y-30)*(y-30) < 25)
		return true;
	else return false;
}

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{ 
		int cas,score(0); cin >> cas;
		for(int i=0;i<cas;i++)
		{
		int x,y;
		cin >> x>> y;
		if(isBig(x,y))score++;
		else if(isMiddle(x,y))
			score+=2;
		else if(isSmall(x,y))
			score+=3;
		else ;
		}
		cout << score << endl;
		score =0;
	}
}


