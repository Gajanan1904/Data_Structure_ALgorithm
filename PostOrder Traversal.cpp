#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
static int idx=-1;
Node *BuildTree(int arr[],int n){
    idx++;
    if(idx>=n || arr[idx]==-1){
        return NULL;
    }
    Node *currNode=new Node(arr[idx]);
    currNode->left=BuildTree(arr,n);
    currNode->right=BuildTree(arr,n);
    
    return currNode;
}

void PostOrder(Node *root){
    if(root==NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
    
}
int main(){
    int n;

    Node *root=BuildTree(arr,n);
    cout<<"PostOrder Traversal: ";
    PostOrder(root);
    
}