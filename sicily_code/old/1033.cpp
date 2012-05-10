#include <iostream>
using namespace std;

class Range
{
public:
	int x_low,x_high,y_low,y_high;
	Range(){}
	Range(int x,int y, int a,int b)
	{
		x_low = x -1;
		x_high = x + a -1;
		y_low = y -1;
		y_high = y+b-1;
	}
	bool is_building(int i,int j)
	{
		return ( i > x_low && i < x_high && j < y_high && j > y_low);
	}
};

int building[4];

int main()
{
	int m, n;
	while(cin >> m >> n)
	{
		if( m == 0 && n== 0)
			return 0;
		int num;
		cin >> num;
		Range *b = new Range[num];
		for(int i=0;i < num; i++)
		{
			for(int j=0;j<4;j++)
				cin >> building[j];
			b[i] = Range(building[0],building[1],building[2],building[3]);
		}

		long long int **a = new long long int*[ m +1];
		for(int i=0;i< m +1;i++)
			a[i] = new long long int[n+1];

		a[0][0] = 1;
	    for(int i =0;i<m+1;i++)
		{
			for(int j =0; j<n+1;j++)
			{
				if(i ==0||j==0)a[i][j] = 1;
				else 
				{
					for (int k=0;k <num;k++)
					{
						if(b[k].is_building (i,j))
						{
							a[i][j] = 0;
							goto out;
						}
					}
					 a[i][j] = a[i-1][j] + a[i][j-1];
out:;
				}
			}
		}

		cout << a[m][n] << endl;
		delete [] b;
		for(int i=0;i < m+1;i++)
		{
			delete [] a[i];
		}

		delete [] a;
	}
}



		  