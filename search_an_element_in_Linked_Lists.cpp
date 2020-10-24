#include <iostream>
using namespace std;

class node{
public:
    int data;
    node*next;
    //constructor
    node(int d ){
        data = d;
        next  = NULL;
    }
};
void insertAtHead(node*&head, int d){

     if(head == NULL){
         head = new node(d);
         return;
     }

     node*n = new node(d);
     n->next = head;
     head= n;
}
bool search(node*head, int key){
   node*temp = head;
   while(temp!= NULL){
       if(head->data == key ){
           return true;
       }
       head = head->next;
   }
   return false;
}

void print(node*head){
    while(head!= NULL){
        cout<<head->data<<"->";
        head = head->next;
     }
  cout<<endl;
}
int main() {
    node*head = NULL;

    insertAtHead(head, 2);
    insertAtHead(head,0);
    insertAtHead(head, 9);
    insertAtHead(head, 7);

   if (search(head, 2)){
       cout<<"element found";
   }
   else{
       cout<< "element not found";
   }
   
}
