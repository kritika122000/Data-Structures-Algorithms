#include<iostream>
#include<queue>
using namespace std;
class node{
	public:
	int data;
//	bool r,l;
	node*right,*left;
	
	node(int d){
		data=d;
		right=left=NULL;
	}
};
node* build(string str){
	if(str=="false")
	return NULL;
	int d;
	cin>>d;
	node*root=new node(d);
	string str1,str2;
	cin>>str;
		root->left=build(str);
	cin>>str2;
		root->right=build(str2);
	return root;
}
int height(node*root){
	if(root==NULL)
	return 0;
	int lh=height(root->left);
	int rh=height(root->right);
	return max(lh,rh)+1;
}
void print(node*root,int k,int s){
	if(root==NULL)
	return;
	
	if(k==1){
		cout<<root->data<<" ";
		return;
	}
	if(s%2!=0){
	print(root->left,k-1,s);
	print(root->right,k-1,s);
   }
   else{
   	print(root->right,k-1,s);
	print(root->left,k-1,s);
   }
   return;
}
void levels(node*root){
	int h=height(root);
	for(int i=1;i<=h;i++){
		print(root,i,i);
		}
}

int main(){
	node*root=build("true");
	levels(root);
	return 0;
}
