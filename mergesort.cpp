// #include<iostream>
// using namespace std;

// int findMiddleTerm(int arr[], int n) {
//     if (n % 2 == 0) {
       
//         return (arr[n/2 - 1] + arr[n/2]) / 2;
//     } else {
//         return arr[n/2];
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int middle_term = findMiddleTerm(arr, n);
//     cout << "THE MIDDLE TERM IS: " << middle_term << endl;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(int arr[],int si,int mid,int ei){
//     vector<int> temp;
//     int i=si;
//     int j=mid+1;
    
//     while(i<=mid && j<=ei){
//         if(arr[i]<=arr[j]){
//             temp.push_back(arr[i++]);
//         }
//         else{
//             temp.push_back(arr[j++]);
//         }
//     }
    
//     while(i<=mid){
//         temp.push_back(arr[i++]);
//     }
//     while(j<=ei){
//          temp.push_back(arr[j++]);
//     }
    
//         //vector->temp->original arr
//     for(int idx=si,x=0;idx<=ei;idx++){
//         arr[idx]=temp[x++];
//     }
// }

// void mergeSort(int arr[],int si,int ei){
//     if(si>=ei){
//         return;
//     }
//     int mid=si+(ei-si)/2;
//     mergeSort(arr,0,mid);//left half
//     mergeSort(arr,mid+1,ei);//right half
//     merge(arr,si,mid,ei);
    
// }

// void printArr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main() {
//     int arr[6] = {6, 3, 7, 5, 2, 4};
//     int n = 6;
    
//     mergeSort(arr, 0, n - 1);
//     printArr(arr, n);
    
//     return 0;
// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }







