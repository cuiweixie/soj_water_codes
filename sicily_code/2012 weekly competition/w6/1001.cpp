#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int n,m;
int a[25][25];
int arr[625];
struct node {
	int i,j;
}r1,r2;
void fix(int num);
 struct node find_num(int num)
{
  struct node ret;
	for(int i=0;i<n;i++)
		for(jnt j=0;j<m;j++)
		{
			if(num==arr[i][j])
			{
				ret.i=i;
				ret.j=j;
				return ret;
			}
		}
}

int main()
{
	cin>>m>>n;
	int k=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			arr[k]=a[i][j];
			k++;
		}
	greater<int> g;
	sort(arr,arr+k,g);
	r1.i=0,r1.j=0;
	for(int i=0;i<k;i++)
	{
		fix(arr[i]);
	}
	return 0;
}
void fix(int num)
{
  struct node tmp=find_num(num);
}
