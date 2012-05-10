#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
	    string str;
		int count(0),score(0);
		cin >> str;
		for(unsigned int i=0;i<str.length();i++)
		{
	    if(str[i] =='O')
			count++;
		else 
		{
			score+=count*(count+1)/2;
			count=0;
		}
		}
		score+=count*(count+1)/2;
		cout << score << endl;
		count = score =0;
	}

}
