#include <iostream>
#include <string>
using namespace std;
int col,row;
char ch[200][100];
int main()
{
	freopen("in.txt","r",stdin);
	while(cin>>col&&col!=0)
	{
		string str;
		cin >> str;
		row=str.size()/col;
		int i=0;int count;
		for(int k=0;k<str.size();)
		{
			count=1;
			if(i%2==0)
			{
				for(int j=0;j<col;j++)
				ch[i][j]=str[k++];
			    i++;
			}
			else
			{
				for(int j=col-1;j>=0;j--)
					ch[i][j]=str[k++];
				i++;
			}
		}
		for(int i=0;i<col;i++)
			for(int j=0;j<row;j++)
				cout <<ch[j][i];
		cout << endl;
	}
}