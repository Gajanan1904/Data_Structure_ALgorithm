#include<iostream>
#include<queue>
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

int height(Node *root){
    if(root==NULL){
        return NULL;
    }
    int leftHt=height(root->left);
    int rightHt=height(root->right);
    
    int currHT=max(leftHt,rightHt)+ 1;
    return currHT;
    
}
int main(){
    int n;
    cin>>n;
    
    Node *root=BuildTree(arr,n);
    int heightTree=height(root);
    cout<<heightTree;
}
