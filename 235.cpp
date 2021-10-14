#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
};
void deletion(node* head,int value)
{
	node* temp=head;
	while(temp->next->data !=value)
	{
		temp=temp->next;
	}
	node* p=temp->next;
	temp->next=temp->next->next;
	delete p;
}

int main()
{
	
	
}
