#include <bits/stdc++.h>
using namespace std;

// Class Definition 

class Solution{
    public:
    vector<int> Solution::solve(vector<int> &A, int B) ;
    
};

// Program Code
vector<int> Solution::solve(vector<int> &A, int B) {

    priority_queue<int,vector<int>,greater<int>> minh;

    vector<int> ans;

    for(int i =0; i < A.size();i++){
        minh.push(A[i]);
        if(minh.size()>B){
            minh.pop();
        }
    }

    while(!minh.empty()){
        ans.push_back(minh.top());
        minh.pop();
    }

    return ans;
    

}
