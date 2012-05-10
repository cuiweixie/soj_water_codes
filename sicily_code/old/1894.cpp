#include <iostream>
#include <algorithm>
using namespace std;
long long int pumb[20],n,sum;
long long int turn_off;
bool can; const long long int pool = 3628800;
int main()
{
	while(cin >> n&&n!=0)
	{
		turn_off=0;sum=0;can=0;
		for(int i=0;i<n;i++)
		{
			cin >> pumb[i];
			pumb[i]=pool/pumb[i];
			sum+=pumb[i];
			if(pumb[i]>0)can =1;
		}
		if(!can) cout <<"Impossible"<<endl;
		else
		{
			if(sum > 0)
			{long long  int t=(pool%sum==0)?pool/sum:pool/sum+1;
				cout << t <<endl;
			}
			else{
				cout <<"NO ";
				sort(pumb,pumb+n);
				int j=0;
			    sum=0;
				for(int i=n-1;i>=0;i--)
				{
					sum=sum+pumb[i];
					if(sum<=0) {j=i;
					break;
					}
				}
			   cout << j+1 <<endl;
			}
		}
	}
}