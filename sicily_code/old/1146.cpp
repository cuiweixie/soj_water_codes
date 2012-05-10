#include <iostream>
#include <cstdio>
using namespace std;
int t,m,w,v,f[1001];
void oneZeroKnap()
{
    for(int i=t;i>=w;i--)
        f[i]=(f[i]>=f[i-w]+v)?f[i]:f[i-w]+v;
}
int main()
{
    freopen("in.txt","r",stdin);
    scanf("%d%d",&t,&m);
    for(int i=0;i<m;i++){ scanf("%d%d",&w,&v);
    oneZeroKnap();
    }
   printf("%d\n",f[t]);
}