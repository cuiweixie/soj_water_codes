#include <iostream>
using namespace std;
int w[3],r[4];
int weight,add[4],price[4];
int main()
{
	freopen("in.txt","r",stdin);
	int i=1;
	while(cin >> w[0]>>r[0])
	{
		cin >> w[1]>>r[1]>>w[2]>>r[2]>>r[3];
		cout <<"Set number "<<i++<<":"<<endl;
		while(cin >> weight&&weight!=0)
		{
			
		    cout <<"Weight ("<<weight<<") has best price $"<<price<<" (add "<<add<<" pounds)"<<endl;
		}
	}
}
	         