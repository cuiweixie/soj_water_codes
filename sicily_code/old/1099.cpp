#include <iostream>
using namespace std;
struct Plane{
	int cost;
	char type;
	int passenger;
	int x0;
};
Plane A,B;
int gcd;
int c;
void make_B_big()
{
	if(B.cost*A.passenger>=A.cost*B.passenger) return ;
	Plane temp = B;
	B = A;
	A = temp;
}
int exGCD(int a,int b,int &x,int &y)
{
	if(b==0) 
	{
		x=1;
		y=0;
		return a;
	}
	int r=exGCD(b,a%b,x,y);
	int t= x;
	x=y;
	y=t-a/b*y;
	return r;
}
void fix(int a,int b,int &x,int &y)
{
	int t;
	if(x*gcd%b==0)
         t = x*gcd/b;
	else
	{
		if(x>0)
			t=x*gcd/b;
		else
			t=x*gcd/b-1;
	}
	x=x-b*t/gcd;
	y=y-a*t/gcd;
	x=x*c/gcd;
	y=y*c/gcd;
}
int main()
{
	int i=1;
	while(cin >> c)
	{
		if(c==0) return 0;
		cin >> A.cost >> A.passenger;A.type='A';B.type='B';
		cin >> B.cost >> B.passenger;
		make_B_big();
		gcd = exGCD(A.passenger ,B.passenger ,A.x0 ,B.x0 );
		if(c%gcd!=0)
			cout << "Data set "<< i<<": cannot be flown"<<endl;
		else
		{
			fix(A.passenger ,B.passenger ,A.x0,B.x0);
			if(A.type=='B')
			{
				Plane temp = B;
				B = A;
				A = temp;
			}
			cout <<"Data set "<<i<<": "<<A.x0<<" aircraft A, "<<B.x0<<" aircraft B"<<endl;
		}
		i++;
	}
}

			    

