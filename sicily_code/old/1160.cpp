#include <iostream>

using namespace std;

struct Move
{
    char name[251];
    double pos;
};

Move _move[32000];
int n, np;
double len, speed, maxlen;
bool p;

void Init()
{
    scanf("%lf%lf\n", &len, &speed);
    int i;
    char d;
    maxlen = 0;
    np = 0;
    for(i=0; i<n; i++)
    {
        scanf("%c%lf%s\n", &d, &_move[i].pos, _move[i].name);
        if(d == 'p' || d == 'P')
        {
            np++;
            if(len - _move[i].pos > maxlen)
            {
                maxlen = len - _move[i].pos;
                p = true;
            }
        }
        else if(d == 'n' || d == 'N')
        {
            if(_move[i].pos > maxlen)
            {
                maxlen = _move[i].pos;
                p = false;
            }
        }
    }
}

void Print()
{
    char str[100];
    sprintf(str, "%lf", maxlen / speed);
    int result, por;
    sscanf(str, "%d.%2d", &result, &por);
    printf("%10d.%02d ", result, por);
    if(p)
        printf("%s\n", _move[n-np].name);
    else
        printf("%s\n", _move[n-np-1].name);
}

int main()
{
//    freopen("out.txt", "w", stdout);
    while(scanf("%d", &n) && n!=0)
    {
        Init();
        Print();
    }
    return 0;
}