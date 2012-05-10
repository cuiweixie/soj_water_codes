#include <iostream>
using namespace std;

//node �൱��С�� left rihgt �ֱ���ǰ�����

class node{
public:
	int left;
	int right;
	node(){}
	node(int l,int r)
	{
		left = l;
		right =r;
	}
};

int main()
{
	int test;
	cin >> test;
	for(int i=0;i<test;i++)
	{
		int n,m; cin >> n >> m;
		node *list = new node[n+2]; //�����β��㷽�����

		//��ʼ��
		list[0].left =0; list[0].right = 1;
		list[n+1].left =n;list[n+1].right = n+1;

		for(int k =1;k <= n;k++)
		{
			list[k] = node(k-1,k+1);
		}
	
		for(int j=0;j<m;j++)
		{
			int oper,left,right;
			cin >> oper >> left >> right; if(left == right)continue;
			if(oper == 1)
			{
				if(list[left].right != right) // �Ѱ�Ҫ������ ������
				{
					//�Ƴ����left
					list[list[left].right].left = list[left].left;
					list[list[left].left].right = list[left].right;

					// ����right�����
					list[list[right].left].right = left;
					list[left].left = list[right].right;
					list[left].right = right;
					list[right].left = left;
				}
			}
			if(oper ==2)
			{
				if(list[right].right != left)
				{
					// remove left node
						list[list[left].left].right = list[left].right;
						list[list[left].right].left = list[left].left;

						//add left node
						list[list[right].right].left=left;
						list[left].right =list[right].right;
						list[right].right = left;
						list[left].left = right;
				}
			}
		}
		int out = list[0].right;
		for(int i=0;i<n;i++)
		{
			cout << out << " ";
			out = list[out].right;
		}

		delete [] list;
	}
}

				
       
	      


