#include <iostream>
#include <stdio.h>
using namespace std;
#define maxxLEN 100

int main()
{
    int t, n, m;
    int i, j;
    float average;
    int score[maxxLEN][maxxLEN];
    int maxx[maxxLEN];
    int minn[maxxLEN];

    cin >> t;
    while(t--)
    {
        scanf("%d%d", &n, &m);
        for(i = 0; i < m; i++)
        {
            maxx[i] = 0;
            minn[i] = 100;
        }

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                scanf("%d", &score[i][j]);
                if(score[i][j] > maxx[j])
                    maxx[j] = score[i][j];
                if(score[i][j] < minn[j])
                    minn[j] = score[i][j];
            }
        }

        for(j = 0; j < m; j++)
        {
            average = 0;
            for(i = 0; i < n; i++)
            {
                average += score[i][j];
            }
            average = (average - maxx[j] - minn[j]) / (n - 2);
            printf("%.2f\n", average);
        }

    }
    return 0;
}