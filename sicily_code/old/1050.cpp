#include <cstdio>
#include <set>
#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;
int goal;
int temp;
int maxx=-9999;
bool flag=false;
set <int>::iterator pa;
set <int>::iterator pb;
set <int>num[32];
//0 for +
//1 for -
//2 for *
//3 for /
//4 for b/
//5 for b-
void test()
{
  if(temp<goal )
  {
   if((goal-temp)<(goal-maxx))
   maxx=temp;
   return;
  }
     else if(temp>goal) ;
     else 
  {

   maxx=goal;
  flag=true;
  }

 }
  bool opc(int i,int j,int k,int m)
{  
   switch(m)
 {
 case 0: temp=j+k;        // +
      test();
      num[i].insert(temp);
             break;
 case 1: temp=j-k;       // -
      test();
            num[i].insert(temp);
            break;
 case 2: temp=j*k;     // *
      test();
            num[i].insert(temp);
         break;        
 case 3: if(k!=0 && j%k==0)    // /
   {  
   temp=j/k;
   test();
             num[i].insert(temp);
    break;
   }
      break;
 case 4: temp=k-j;
      test();
       num[i].insert(temp);
       break;         

 case 5: if(j!=0 && k%j==0) 
   {
   temp=k/j;
    test();
    num[i].insert(temp);
   break;
   }
   break;        
 }    
   return true;

}

void cal(int i,set<int> &a,set<int>& b)
{   
  int k;
  for(pa=a.begin();pa!=a.end();pa++)
  for(pb=b.begin();pb!=b.end();pb++)
   for(k=0;k<6;k++)
   {
       if(!flag)opc(i,*pa,*pb,k);
      else return;
   }

}

set<int> & f(int i)
{
 if(num[i].size())
  return num[i];
 int x;
 for(x=1;x<i;x++)
  if((x & i)==x)
  {
   if(!flag)cal(i,f(x),f(i-x));
   else break;
  }
   return num[i];
}
 int main()
{
 int cases,i,j;
  scanf("%d",&cases);
 //int A[5];
 vector<int>first(5);

 while(cases--)
    {
  for( i=0;i<5;i++)
  {
   scanf("%d",&first[i]);
          //first.push_back(A[i]);
  }
  scanf("%d",&goal);
  for(i=1,j=0;i<32;j++)
  {
   num[i].insert(first[j]);
      i*=2;
  }
  for(i=1;i<32;i++)
  {
     if(!flag)f(i);
     else break;
  }
    printf("%d\n",maxx);
 //cout<<flag<<endl;
   for(i=0;i<32;i++)
   num[i].clear();
  maxx=-9999;
  flag=false;
  }
 return 0;
}