#include <iostream>
using namespace std;

int main()
{
	int apple[10];
	for(int i=0;i <10;i++)
	{
		cin >> apple[i];
	}
	int tao,count(0);
	cin >> tao;
	tao+=30;
	for(int i=0;i <10;i++)
	{
		if(tao >= apple[i])
          count++;
	}
	cout << count << endl;
}