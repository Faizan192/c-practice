#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
};
void reverse(node* &head)
{
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
