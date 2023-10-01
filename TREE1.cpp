#include <iostream>
using namespace std;
class node{
  public:
  int data;
  node*right;
  node*left;
  
  node(int d){
    data=d;
    right=NULL;
    left=NULL;
  }
};

// TO BUILD TREE  8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1  
node* buildtree(){
 int d;
 cin>>d;

 if (d==-1){
    return NULL;
    }
    
// to create node
    node *root = new node(d);
    root->left  =buildtree();
    root->right =buildtree();

    return root;
}

void preorder(node*root){
if(root==NULL){
    return;
}

cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}

int main() {
   
node*root=buildtree();
cout<<"preorder : ";
preorder(root);
    return 0;
}
