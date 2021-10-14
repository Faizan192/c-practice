#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
};
void reverse(node* &head)
{
	if(head==NULL || head->next==NULL )
	{
		return;
	}
	if(head->next->next==NULL)
	{
		node* a=head->next;
		a->next=head;
		head=a;
	}
	node* p,q,r;
	p=head->next;
	q=head->next->next;
	while(p->next!=NULL)
	{
		r=p;
		p=p->next;
		q=q->next;
		r->next=head;
		head=r;
	}
	p->next=head;
	head=p;
}

int main()
{
	
}
