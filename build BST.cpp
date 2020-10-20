#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*right;
	node*left;

	node(int d){
		data=d;
		right=left=NULL;
	}
};
node* build(int a[],int s,int e){
    if(s>e)
	return NULL;

    int mid=(s+e)/2;
	node*root=new node(a[mid]);
    root->left=build(a,s,mid-1);
	root->right=build(a,mid+1,e);
	return root;
}
void preorder(node*root){
    if(root==NULL)
	return;
    cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
int main() {
    int t;  cin>>t;
    while(t!=0){
    int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	node*root=build(a,0,n-1);
	preorder(root);
	cout<<endl;
		t--;
	}
	return 0;
}
