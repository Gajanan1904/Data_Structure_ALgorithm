//Calculate the sum of subarray of size k
#include <iostream>
using namespace std;

void subarraySum(int arr[], int n, int k) {
    int Sum = 0;

    for (int i = 0; i < k; i++) {
        Sum += arr[i];     //Sum=38
    }

    cout <<Sum << " ";

    for (int i = k; i < n; i++) {
        Sum+=arr[i];     //Sum=38 + 3           sum=41
        Sum=sum-arr[i-k] //Sum=sum-arr[4-4]     sum=41-arr[0]  sum=41-10
        cout << Sum << " ";
    }
}

int main() {
    int arr[] = {10,12,11,5,3,4,10};
    int n = 7;
    int k = 4;

    subarraySum(arr, n, k);

    return 0;
}