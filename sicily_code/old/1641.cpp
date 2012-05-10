#include <iostream>

using namespace std;
int n,a[101];
int main()
{
	while(cin >> n)
	{
		if(n==0){cout <<"0"<<endl; continue;}
		for(int i=0;i<n;i++) 
			cin >> a[i];
		int count =n;
		for(int i=0;i<n;i++)
		{
		    for(int j=i-1;j>=0;j--)
			{
				if(a[j]>a[i])
					{
						count--;
					goto out;
				}
			}
				for(int k=i+1;k<n;k++)
				{
					if(a[k]<a[i]){
						count--;
						goto out;
					}
				}
out:;
		}
			
		cout << count << endl;
	}
}