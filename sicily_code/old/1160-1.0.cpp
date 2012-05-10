#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Man{
	string name;
	float position;
};
Man man[32000];
int np;
bool p;
int N;
float L,V;
float maxlen;
char dir;

int main()
{
	while(cin >> N)
	{
		if(N == 0) return 0;
		cin >> L >> V;
		maxlen = 0;
		np =0;
		p = 0;
		for(int i=0;i<N;i++)
		{
			cin >> dir >> man[i].position >> man[i].name;
			if(dir == 'p'||dir == 'P')
			{
				np++;
				if(maxlen < L-man[i].position)
				{
					maxlen = L-man[i].position;
					p = true;
				}
			}
			else{
				if(maxlen  < man[i].position)
				{
					maxlen = man[i].position;
					p = false;
				}
			}
		}
		cout << fixed << setprecision(2);
		string ans = (p)?man[N-np].name:man[N-np-1].name;
		cout<< setw(13) << maxlen/V<<" " << ans << endl;
	}
}
