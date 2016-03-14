#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	
};
void init(Node *h,int x){

h->data=x;
h->next=NULL;
}
void add(Node *h,int x){
	Node *cur=new Node;
	cur->next=NULL;
	cur->data=x;
	while(h->next!=NULL){

		h=h->next;
	}

	h->next=cur;
	
}
void display(Node *h){
	while(h!=NULL){
		cout<<h->data<<" ";
		h=h->next;
	}
}
void deleteFromEnd(Node *h){
	Node *a;
	while(h->next!=NULL){
		a=h;
		h=h->next;
		
	}
	a->next=NULL;
	
} 
int main(){
	struct Node *newHead;
	struct Node *head=new Node;
 init(head,20);	
 add(head,60);
 add(head,80);
 deleteFromEnd(head);
 display(head);
return 0;	
}



