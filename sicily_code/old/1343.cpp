#include <iostream>
#include <string>
using namespace std;

int s,w,t;
string str;
int relation(char ch)
{
	if(ch == 'a'+s-1) return 0;
	if(ch == 'a'+t-1) return 2;
	else return 1;
}

void output(string _max)
{
	bool stop = 0;
	for(int j=0;j<5&&!stop;j++)
	{
		if(str == _max) stop =1;
		else
		{
			for(int i=w-1;i>=0;i--)
			{
				if(str[i]!=_max[i]) 
				{
					str[i]++;
					for (int k = i+1;k<w;k++) str[k] = str[k-1]+1;
					break;
				}
			}
			cout << str << endl;
		}
	}
}

int main()
{
	while(cin >> s >> t >> w)
	{
		cin >> str;
		string _max;
		for(int i=t-w+1;i<=t;i++)
		{
			_max=_max+(char)('a'+i-1);
		}
	    output(_max);
	}
}

			
	

