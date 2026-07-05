#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data){
        left=right=NULL;
    }
};
static int idx=-1;
Node *BuildTree(int arr[],int n){
    idx++;
    if(idx>=n || idx==-1){
        return NULL;
    }
    Node *currNode=new Node(arr[idx]);
    currNode->left=BuildTree(arr,n);
    currNode->right=BuildTree(arr,n);
    
    return currNode;
}

void PreOrder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
int main(){
    
    Node *root=BuildTree(arr,n);
    cout<<"PreOrder Traversal: ";
    PreOrder(root);
    
}
