#include <iostream>
using namespace std;

int testcase,N[51],M[51],C,P,S;
int ans;
int main()
{
	cin >> testcase;
	while(testcase--)
	{
		cin >> N[0]>>M[0]>>C>>P>>S;
		
		for(int i=1;i<=S;i++)
		{
			if(C*(S-i-1)>=P)
			{
				N[i] = N[i-1]+M[i-1]/P;
				M[i]=M[i-1]-(M[i-1]/P)*P+N[i-1]*C;
			}
			else{
				M[i]=M[i-1]+N[i-1]*C;
				N[i]=N[i-1];
			}
		}
		cout << M[S]<<endl;
	}
}

	    
