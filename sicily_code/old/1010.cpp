#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool comb[210][210];
int n;
string A,B,C;
void done(string A,string B,string C,int cas)
{
	int Alen = A.length();
	int Blen = B.length();
	for (int i=0;i<Blen;i++)
	{
		if(B[i] == C[i]) 
				comb[0][i+1]=1;
		else 
			break;
	}
	for(int i=0;i<Alen;i++)
	{
		if(A[i] == C[i])
		     comb[i+1][0] = 1;
		else
			break;
	}
	for(int i=1;i<=Alen;i++)
		for(int j=1;j<=Blen;j++)
		{
			comb[i][j] = ((comb[i-1][j]&&A[i-1]==C[i+j-1])||(comb[i][j-1]&&B[j-1]==C[i+j-1]));
		}
	if(comb[Alen][Blen])
		cout << "Data set "<<cas <<": yes"<<endl;
	else
		cout <<"Data set "<< cas <<": no"<<endl;
}
	int main()
	{
		cin >> n;
		for(int i=1;i<=n;i++)
		{
			cin >> A >> B >> C;
			done(A,B,C,i);
		}
	}



	