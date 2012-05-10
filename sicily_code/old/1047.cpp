#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,sum;
	bool ok;
	int diff,tmp;
	int n;
	cin >> n;
     for(int k=0;k<n;k++)
	{
		cin >> a >> b >> c >> d;
		if(a>b) 
		{
			int temp = a;a=b;b=temp;
		}
		ok = false; 
		tmp = d-c+1;
		sum = (c+d)*tmp/2;
		diff= b-a;
		if(diff == sum) ok =true;
		else if((tmp%2==0)&&(diff<=tmp*tmp/4))
			{
				if((tmp%4==0&&diff%2==0)||(tmp%4!=0&&(diff-1)%2==0))
					ok = true;
			}
		else
			{
				int min,max;int haft = tmp/2;
				for(int i=tmp-1;i>haft;i--)
				{
					min=2*(i*c+(i-1)*i/2)-sum;
					max=2*(i*d-(i-1)*i/2)-sum;
					if(diff>=min&&diff<=max&&(diff-min)%2==0)
					{
						ok = true;
						break;
					}
				}
			}
			if(ok) cout << "possible"<<endl;
			else cout <<"no possible"<<endl;
	
	}
}