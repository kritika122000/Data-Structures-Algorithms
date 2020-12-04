#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
	node*prev;
	
	node(int d){
		data=d;
		next=NULL;
		prev=NULL;
	}
};
void InsertAtTail(node*&head,int d,node*&tail){
	node*p=new node(d);
	if(head==NULL){
		head=p; tail=p;
	}
	else{
		node*temp=head;
		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next=p;
		p->prev=temp;
		tail=p;
	}
}
void print(node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	
}
ostream& operator <<(ostream& os,node*head){
	print(head);
	return os;
}
bool palindrome(node*head,node*tail){
       while(head!=tail && head!=tail->next){
       	if(head->data != tail->data)
       	return false;
       	tail=tail->prev;
       	head=head->next;
	   }
	   if(head->data!=tail->data)
	   return false;
	   else
	   return true;
}
int main(){
	node* head=NULL,*tail=NULL;
	 int n;   cin>>n;
	 int d;
	 while(n!=0){
	 	cin>>d;
	 	InsertAtTail(head,d,tail);
	 	n--;
	 }
	 if(palindrome(head,tail))
	 cout<<"true";
	 else
	 cout<<"false";
	return 0;
}
