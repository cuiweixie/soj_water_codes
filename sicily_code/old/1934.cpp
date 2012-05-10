#include <iostream>
using namespace std;
template<class T>
class Node
{
public:
	Node(){}
	Node(T a)
	{
		data = a;
	}

	T data;
    Node<T> *left,*right;
	bool operator==(Node<T>& node)
	{
		if(node.data == this->data)
			return true;
		else
			return false;
	}
	friend ostream& operator<<(ostream& os,Node<T> & node)
	{
		os << node.data;
		return os;
	}
};

int main()
{
	int test;
    cin >> test;
	Node<int> *list;   // 结点指针用来做数组

	while(test--)
	{
		int n,m;
		cin >> n >> m;
		list = new Node<int>[n]; // 结点数组

		// 将结点连起
		list[0].left = NULL;
		list[0].right = list+1;
		list[n-1].left= list+n-2;
		list[n-1].right = NULL;

		for(int i=0;i<n;i++)
		{
			list[i]=Node<int>(i+1);
			if(i+1 <n&&i > 0)
			{
				list[i].left = list+i-1;
				list[i].right = list+i+1;
			}
			
		}

		//设置跟踪起点
		Node<int> *first = list;

		for(int i=0;i<m;i++)
		{
			int b,l,r;
			cin >> b >> l>>r;
		    l--; r--;
			if(b == 1)
			{
				if(list[l].right != list+r)
				{
				if(*first == list[l])
					first =list[1].right;
				if(*first == list[r])
					first = list+l;
				(list[l].left)->right = list[l].right;
				list[l].right->left = list[l].left;
				list[r].left->right = list+l;
				list[l].left = list[r].left;
				list[l].right= list+r;
				list[r].left = list+l;
				}
			}

			if(b == 2)
			{
				if(list[r].right != &list[l])
				{
				if(*first == list[l])
				   first =list[l].right;
			       list[l].left->right = list[l].right;
				   list[l].right->left = list[l].left;
				   list[l].right = list[r].right;
				   list[r].right->left =list+l;
				   list[l].left = list+r;
				   list[r].right = list+l;
				}
			}
		}

			for(int i=0;i<n;i++)
			{
				cout << *first<<" ";
				first = first->right;
			}
			cout << endl;
		
	}
	delete[] list;
		}






