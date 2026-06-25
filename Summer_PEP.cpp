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

//No Two consecutive 0's in a binary string of length n
#include <iostream>
#include <vector>
using namespace std;

vector<string> ans;

void generate(int idx, string str, int n) {
    if (str.size() == n) {
        ans.push_back(str);
        return;
    }

    if (str.empty() || str.back() == '1') {
        generate(idx + 1, str + '0', n);
        generate(idx + 1, str + '1', n);
    } else {
        generate(idx + 1, str + '1', n);
    }
}

int main() {
    int n;
    cin >> n;

    generate(0, "", n);

    for (string s : ans) {
        cout << s << endl;
    }
}

//Count Unique of a grid
#include <iostream>
using namespace std;

int uniquePaths(int i, int j, int m, int n) {
    if (i == m - 1 && j == n - 1)
        return 1;

    if (i >= m || j >= n)
        return 0;

    return uniquePaths(i + 1, j, m, n) +
           uniquePaths(i, j + 1, m, n);
}

int main() {
    int m, n;
    cin >> m >> n;

    cout << uniquePaths(0, 0, m, n);

    return 0;
}


//Fibonaacci using memonizaton;
#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int>& dp) {
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

int main() {
    int n;
    cin >> n;

    vector<int> dp(n + 1, -1);

    cout << fib(n, dp);

    return 0;
}
