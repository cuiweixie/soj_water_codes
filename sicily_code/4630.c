#include <stdio.h>
double area(double T[3][2])
{
#define cal_area(x1,y1,x2,y2) ((x1)*(y2)-(x2)*(y1))/2
	double ret=cal_area(T[0][0]-T[2][0],T[0][1]-T[2][1],T[1][0]-T[2][0],T[1][1]-T[2][1]);
	return ret>0?ret:-ret;
}
