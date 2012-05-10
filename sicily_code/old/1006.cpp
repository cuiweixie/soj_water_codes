#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int vote[100][5];
int r[5],a[5];char b[5];
int minn,n;
int dis(int k)
{
	int temp=0;
	for(int i=0;i<5;i++)
		for(int j=i+1;j<5;j++)
		{
			if(vote[k][i]>vote[k][j]&&r[i]>r[j]);
			else if(vote[k][i]<vote[k][j]&&r[i]<r[j])
				;
			else temp++;
		}
	return temp;
}
int main()
{
	freopen("in.txt","r",stdin);
	while(cin >> n&&n!=0)
	{
		char ch;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<5;j++)
			{
				cin >> ch;
				vote[i][ch-'A']=j;
			}
		}
		minn=100000;
		for(int i=0;i<5;i++)r[i]=i;
		do{
		    int temp=0;
			for(int i=0;i<n;i++)
				temp+=dis(i);
			if(minn>temp)
			{
				minn=temp;
				for(int i=0;i<5;i++)a[i]=r[i];
			}
		}while(next_permutation(r,r+5));

		for(int i=0;i<5;i++)b[a[i]]='A'+i;
		for(int i=0;i<5;i++) cout << b[i];
		cout <<" is the median ranking with value "<<minn <<"."<<endl;
	}
}
	

