#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*left,*right;
	
	node(int d){
	 data=d;
	 left=right=NULL;
	}
};
node* build(string str){
	if(str=="false"){
		return NULL;
	}
	int d;
	cin>>d;
	
	node*root=new node(d);
	string str1,str2;
	cin>>str1;
		root->left=build(str1);
	cin>>str2;
	root->right=build(str2);
	
	return root;
}
bool structure(node*root,node*head){
	if(root==NULL && head==NULL)
	return 1;
	
	bool l=0,r=0;
	if(((root->left!=NULL && head->left!=NULL) || (root->left==NULL && head->left==NULL)) && structure(root->left,head->left))
       l=1;
	if(((root->right!=NULL && head->right!=NULL) || (root->right==NULL && head->right==NULL)) && structure(root->right,head->right))
       r=1;
       
    return r&l;
}
int main(){
	node*root=build("true");
	node*head=build("true");
	if(structure(root,head))
	cout<<"true";
	else
	cout<<"false";
	return 0;
}
