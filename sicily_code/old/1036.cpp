#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<vector<char> > vec(26);
string key,text;
char alph[10][100];
int b[10];
int a[10];
int main()
{
	freopen("in.txt","r",stdin);
	while(cin >>key)
	{
		if(key=="THEEND")return 0;
		cin >> text;
		int len=key.length();
		int i=0;
		     for(int j='A';j<='Z';j++)
			 {
				 for(int k=0;k<len;k++)
				 {
					 if(key[k]==j)
					 {
						 a[i++]=k;
					 }
				 }
			 }
			 int r=text.length()/len;
			 for(int i=0;i<len;i++)
			 {
				 for(int j=0;j<r;j++)
				 {
					 alph[j][i] =text[r*i+j];
				 }
			 }
	for(int i=0;i<len;i++)
	   b[a[i]]=i;
	
			for(int i=0;i<r;i++)
			{
				for(int k=0;k<len;k++)
			cout <<alph[i][b[k]];
			}
	
	cout << endl;
	}
	fclose(stdin);
}
		
