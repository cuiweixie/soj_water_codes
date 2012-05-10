#include <iostream>
using namespace std;
int B,N;
int pow(int a)
{
	int ret=1;
	for(int i=1;i<=N;i++) ret*=a;
	return ret;
}
int getA()
{
	if(B== 1) return 1;
	int floorl=1,floorf;int ans;
	for(int i=2;i<=B;i++)
	{
		floorf=pow(i);ans =i;
		if(floorf>=B)break;
		floorl= floorf;
	}
	if(floorf-B<B-floorl) return ans;
	else return ans-1;
}


int main()
{
	while(cin >>B>>N)
	{
		if(B==0) return 0;
		cout << getA() << endl;
	}
}