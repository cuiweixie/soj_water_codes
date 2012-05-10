#include <iostream>
#include <cmath>
using namespace std;
long long int n;
long long int seular(long long int n)
{
    long long int ret=1,pa;
    for(int i=2;i<=sqrt((double)n);i++)
    {
        if(n%i==0)
        {
          long long  int a=1;
           n/=i,pa=i;
           while(n%i==0)
               n/=i,pa*=i,a++;
           pa=a*(pa-pa/i)+pa;
           ret*=pa;
        }
    }
    if(n>1)ret*=n+n-1;
    return ret;
}
int main()
{
    while(cin >> n)
    {
        cout << seular(n)<<endl;
    }
}