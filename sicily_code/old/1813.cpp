#include <iostream>
#include <string>
using namespace std;
string A,B;
int m;

int main()
{
	int test;cin >> test;
	while(test--)
	{
		cin >> m >> A >> B;
		int a=0,b=0;
		string P,Q;
		for(int i=0;i<A.length();i++)
			if(A[i]>='0'&&A[i]<='9')
			a=a*m+A[i]-'0';
			else
				a=a*m+A[i]-'A'+10;
		for(int i=0;i<B.length();i++)
			if(B[i]>='0'&&B[i]<='9')
			b=b*m+B[i]-'0';
			else
				b=b*m+B[i]-'A'+10;
		  int p=a/b;
		  int q=a%b;
		  if(p==0) P="0";
		  if(q==0) Q="0";
		  while(p!=0)
		  {
			  int temp = p%m;
			  p/=m;
			  if(temp<10)
				  P= (char)(temp+'0')+P;
			  else
				  P=(char)(temp-10+'A')+P;
		  }
		  while(q!=0)
		  {
			  int temp = q%m;
			 q/=m;
			  if(temp<10)
				 Q= (char)(temp+'0')+Q;
			  else
				  Q=(char)(temp-10+'A')+Q;
		  }

		  cout << P<<"\n"<<Q<<endl;
	}
}