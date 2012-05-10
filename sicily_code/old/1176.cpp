#include <iostream>
using namespace std;

const int N = 1001;
int num[N];
int best[N][N];
int n;

int dpSearch(int head,int tail)
{
	if(head > tail) return 0; // out of range 
	if(best[head][tail] != -1)   // there is two number left player1 choose the big
	{
     return best[head][tail];
	}

	if(head == tail)
	{
		best[head][tail] = num[head];
		return best[head][tail];
	}
    int s1,s2;
	// player1 choose the left 
	if( num[head+1] >= num[tail])
	{
		s1 = num[head] - num[head+1] + dpSearch(head+2,tail);
	}
	else {
		s1 = num[head] - num[tail] + dpSearch(head+1,tail-1);
	}

	// player2 choose the right
	if(num[head] >= num[tail-1])
	{
		s2 = num[tail] - num[head] + dpSearch(head+1,tail-1);
	}
	else 
	{
		s2 = num[tail] - num[tail-1] + dpSearch(head,tail-2);
	}

	best[head][tail] = (s1 > s2)? s1:s2;
	return best[head][tail];
	}


	int main()
	{
		int testcase =0;
		while(cin >> n)
		{
			if( n==0) return 0;
			testcase++;
			for(int i=0;i<n;i++)
			{
				cin >> num[i];
				for(int j =0;j<n;j++)
					best[i][j] = -1;
			}
             int length = dpSearch(0,n-1);
			 cout<< "In game "<< testcase <<", the greedy strategy might lose by as many as "<<length<<" points."<<endl;
		}
	}



	