#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int n,r;
string str;
int ans[20]={0};
void initialized(string str)
{
	memset(ans,0,sizeof(ans));
	n = 0;
	if(str[0] != '-')
	{
	for(int i=0;i<str.size();i++)
	{
		n = n*10+str[i]-'0';
	}
	}
	else
	{
		for(int i=1;i<str.size();i++)
		{
			n = n*10+str[i]-'0';
		}
		n = -1*n;
	}
}
 int trainslated(int n,int r)
{
        int i=0;
		while(1)
		{
		   ans[i] = n %r;
		   n = n/r;
		   if(n < r){
			   ans[i+1] = n;
			   return i+1;
		   }
		   i++;
		}
 }

 void print(int r)
 {
	 if(r <10)
	 {
		 bool first = 1;
		 for(int i= 19;i>=0;i--)
		 {
			 if(ans[i]!=0&&first == 1)
				 first = 0;
			 if(first == 0)
			 cout << ans[i];
		 }
		 cout << endl;
	 }
	 else 
	 {
		 bool first = 1;
		 for(int i= 19;i>=0;i--)
		 {
			 if(ans[i]!=0&&first == 1)
				 first = 0;
			 if(first == 0)
			 {
			 if(ans[i] >9)
				 cout << (char)(ans[i] -10+'A');
			 else 
			 cout << ans[i];
		     }
		 }
		 cout << endl;
		 
	 }
 }

		

int main()
{
	while(cin >> str)
	{
		if(str == "#") return 0;
		initialized(str);
		cin >> r;
		if(str == "0")
		{
			cout << "0"<< endl;
			continue;
		}
		r = -1*r;
		if(n < 0)
		{
			int size = trainslated(-1*n,r);
			for(int i=0;i<=size+1;i+=2)
			{
				if(ans[i] == 0) // do nothing
					continue;
				else{
					ans[i] = r-ans[i];
					ans[i+1]++;
					if(ans[i+1]==r)
					{
						ans[i+1] =0;
						ans[i+2]++;
					}
				}
			}
		}
		else
		{
			int size = trainslated(n,r);
				for(int i=1;i<=size+1;i+=2)
			{
				if(ans[i] == 0) // do nothing
					;
				else{
					ans[i] = r-ans[i];
					ans[i+1]++;
					if(ans[i+1]==r)
					{
						ans[i+1] = 0;
						ans[i+2]++;
					}
				}
			}
		}
		print(r);
	}
}
			


		
	    
   
