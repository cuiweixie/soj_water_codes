#include <iostream>
#include <string>
using namespace std;
string str;
void done()
{
	int left=0;
	int right=0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='[')
		{
			right++;
		}
		else
		{
			if(right>0)
			   right--;
			else
				left++;
		}
	}
	for(int i=0;i<left;i++)cout <<"[";
	cout << str;
	for(int i=0;i<right;i++)cout <<"]";
	cout << endl;
}
int main()
{
	while(cin >> str)
		done();
}