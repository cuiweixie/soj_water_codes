#include <iostream>
#include <cstring>
using namespace std;
bool matrix[128][128];
struct Node{
	int x;
	int y;
	Node(int xx=0,int yy=0):x(xx),y(yy){}
};

int cal1(Node A,Node B)
{
 
	if(all_same(A,B)) return 1;
	else
	return 1+cal1(A,Node((A.x+B.x)/2,(A.y+B.y)/2))+cal1(Node((A.x+B.x)/2,(A.y+B.y)/2))+\
		cal1(Node((A.x+B.x)/2,A.y),Node(B.x,(A.y+B.y)/2))+cal1(Node(A.x,(A.y+B.y)/2),Node((A.x+B.x)/2,B.y));
}

bool same(Node A,Node B,Node C,Node D)
{
	int size = B.y - A.y+1;
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
		{
			if(matrix[A.x+i][A.y+j]!=matrix[C.x+i][C.y+j])
				return false;
		}
	return true;
}
bool all_same(Node A,Node B)
{
	bool t = matrix[A.x][A.y];
	for(int i=A.x;i<=B.x;i++)
		for(int j=A.y;j<=B.y;j++)
		{
			if(t != matrix[i][j]) return false;
		}
		return true;
}

int cal2(Node A,Node B)
{
	if(all_same(A,B)) return 1;
	else
	{
		if(B.x-A.x == 2) return 4;
		else 
		{
			if(same(A,Node((A.x+B.x)/2,(B.y+A.y)/2),Node((A.x+B.x)/2,A.y),Node(B.x,(A.y+B.y)/2))
			{
			  


