#include <iostream>
#include <cstdio>
using namespace std;
struct Node {
	int x,y;
};
Node k;
Node A,B;
bool in_line(int x)
{
 return k.y*(x-A.x)%k.x==0;
	
}
int main()
{
	while(scanf("%d%d%d%d" ,&A.x ,&A.y , &B.x,&B.y)!=EOF)
	{
		int ans=0;
		if(A.x==B.x)
			{
				ans=B.y-A.y;
				if(ans<0) ans = (-1)*ans-1;
				else if(ans >0) ans--;
				else;
		}
		else
		{
			k.x=A.x-B.x;k.y=A.y-B.y;
			int beg,end;
			if(A.x > B.x)
			{
				beg =B.x;end = A.x;
			}
			else
			{
				beg=A.x;end = B.x;
			}
			for( int i=beg+1;i<end;i++)
				if(in_line(i))ans=ans+1;
		}
		cout << ans << endl;
	}
}