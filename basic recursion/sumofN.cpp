//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  int cnt=1,sum=0;
    int sumOfSeries(int n) {
        // code here
        if(cnt==n+1){
            return sum;
        }
        sum=sum+cnt*cnt*cnt;
        cnt++;
        sumOfSeries(n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends