#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *next;
};

Node *newnode(int key)
{
	struct Node*temp = new Node;
	temp->data = key;
	temp->next = NULL;
	return temp;
}

void printList(Node * node)
{
	while(node!=NULL)
	{
		cout<<node->data;
		node = node->next;
	}
}