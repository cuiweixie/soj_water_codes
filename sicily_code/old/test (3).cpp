#include <stdio.h>  
int main()  
{  
    int n,a,b,c,d,i;  
    int sum=0;  
    bool isok;  
    scanf("%d",&n);  
    while (n--)  
    {  
        isok=false;  
        scanf("%d%d%d%d",&a,&b,&c,&d);  
        if (a>b)  
        {  
            a^=b^=a^=b;  
        }  
        sum=(c+d)*(d-c+1)/2;  
        if (b-a==sum)                //正好相等  
        {  
            isok=true;  
        }  
        int tmp=d-c+1;  
        int diff=b-a;  
        if (tmp%2==0 && diff<=tmp*tmp/4)            //能平分  
        {  
            if ((tmp%4==0 && diff%2==0)|| (tmp%4!=0 && diff%2==1))  
            {  
                isok=true;  
            }  
        }  
        else  
        {  
            int minn,maxx;  
            for (i=1;i<=tmp/2;i++)  
            {  
                minn=2*(i*c+(i-1)*i/2)-sum;  
                maxx=2*(i*d-(i-1)*i/2)-sum;  
                if (diff>=minn&&diff<=maxx&&(diff-minn)%2==0)  
                {  
                    isok=true;  
                }  
            }  
        }  
        if (isok)  
        {  
            printf("possible\n");  
        }  
        else  
        {  
            printf("not possible\n");  
        }  
    }  
} 