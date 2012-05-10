#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int testcase;
bool ac[11];
bool count[11];
int main()
{
	cin >> testcase;
	for(int k=0;k<testcase;k++)
	{
		int n;
		cin >> n;
		int temp;
		char p; 
		string str;
		memset(ac,0,sizeof(ac));
		memset(count,0,sizeof(count));
		for(int i=0;i<n;i++)
		{
			cin >>temp >> p >> str;
            count[p-'A']=count[p-'a']||(str=="Accept");
			ac[p-'A']=true;
		}
		cout<<"Accept: ";
		for(int i=0;i<10;i++)
			if(ac[i]&&count[i])cout<<char(i+'A');cout << endl;
		cout<<"Wrong: ";
		for(int i=0;i<10;i++)
			if(ac[i]&&!count[i])cout << char(i+'A');cout<<endl;
	}
}
				

