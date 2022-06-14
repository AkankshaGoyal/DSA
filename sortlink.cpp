#include <bits/stdc++.h>
using namespace std;

class Lnode
{
public:
	int data;
	Lnode *next;
};


class Tnode
{
public:
	int data;
	Tnode *left;
	Tnode *right;
};

Tnode *newNode(int data);
int countLnodes(Lnode *head);
Tnode *sortedListToBst(Lnode **head_ref,int n);


int countLnodes(Lnode * head)
{
	int count = 0;
	Lnode*temp = head;
	while(temp)
	{
		temp = temp->next;
		count++;
	}
	return count;
}


void push(Lnode **head_ref,int new_data)
{
	Lnode *new_node = new Lnode();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}





void printlist(Lnode *node)
{
	  while(node!=NULL)
	  {
	  	  cout<<node->data;
	  	  node = node->next;
	  }
}

TNode * newNode(int data)
{
	TNode * node = new Tnode;
	node->data = data;
	node ->left = NULL;
	node ->right = NULL;
	return node;
}

void preorder(TNode * node)
{
	  if(node == NULL)
	  	   return;
	  cout<<node->data;
	  preorder(node->left);
	  preorder(node->right);
}

int main()
{
	Lnode * head = NULL;
	push(&head,7);
	push(&head,6);
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);
	cout<<"Given Linked list"<<endl;
	printList(head);
	TNode * root = sortedListToBst(head);
	preorder(root);
	return 0;
}