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

void LevelOrder(Node *root){
    if(root==NULL){
        return;
    }
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        Node *curr=q.front();
        q.pop();
        
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    Node *root=BuildTree(arr,n);
    cout<<"Level Order Traversal: ";
    LevelOrder(root);
    
}
