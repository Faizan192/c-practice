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
void insertion_at_tail(node* &head,int value)
{
	node *p=new node(value);
	if(head==NULL)
	{
		head=p;
		return;
	}
	while(temp->next==NULL)
	{
		temp=temp->next;
	}
	temp->next=p;
}
void insertion_at_head(node* &head,int value)
{
	node* p=new node(value);
	p->next=head;
	head=p;
}

int main()
{
	
}
