#include<iostream>
using namespace std;
typedef struct _Record{
                    int val;
                    unsigned int times;
                    }Record;

#define UnKnow   0xFFFFFFFF

void Find(int Array[ ],int Len,Record *r)
{

       int i;

       r->val=UnKnow;
       r->times=0;

     for(i=0;i<Len;i++)
        {
          if(UnKnow==r->val)
             {
                r->times=1;
                r->val=Array[i];
             }
            else if(r->val == Array[i]) { r->times++;
            }
           else
           {
             if (0==r->times--) r->val=UnKnow;

           }
        }
   return ;

}

int main()
{
  int Test[10]={1,2,2,3,3,3,4,4,4,3};
  Record r;

  Find(Test,10,&r);
  printf("%d",r.val);


}  