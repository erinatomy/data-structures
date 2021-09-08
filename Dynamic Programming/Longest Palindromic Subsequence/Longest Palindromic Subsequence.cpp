#include <bits/stdc++.h>
using namespace std;

// Class Definition 

class Solution{
    public:
    int Solution::solve(string A);
};

// Program Code
int Solution::solve(string A) {
    string B = A;
    reverse(A.begin(),A.end());

    int n = A.size();
    int dp[n+1][n+1];
    for(int i = 0; i< n+1; i++){
        for(int j = 0; j < n+1;j++){
            if(i==0||j==0)
                dp[i][j] = 0;
        }
    }

    for(int i = 1; i< n+1; i++){
        for(int j = 1; j < n+1;j++){
            if(A[i-1] == B[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    
    }
    return dp[n][n];

}
