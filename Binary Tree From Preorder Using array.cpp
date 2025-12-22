#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node (int data){
        this->data=data;
        left=right=NULL;
        
    }
};
static int idx=-1;
Node *buildTree(int arr[],int n){
    idx++;
    if(idx>=n || arr[idx]==-1){
        return NULL;
    }
    Node *currNode=new Node(arr[idx]);
    currNode->left=buildTree(arr,n);       
    currNode->right=buildTree(arr,n);
    
    return currNode;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];//1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1
    }
    
    Node *root=buildTree(arr,n);
    cout<<"Root = "<<root->data;
}