//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int sumOfDivisors(int n) {
        // Write Your Code here
       int fsum=0;
        for(int i=1; i<=n;i++){
            for(int d=1;d<=i;d++){
                if(i%d==0){
                    int sum=0;
                    sum=sum+d;
                    fsum=fsum+sum;
                }
             
            }
        }
        return fsum;
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
        int ans = ob.sumOfDivisors(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends