// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

// rec + memo giv WA for one test case -> coding ninja
// int dp[1002][1002];
// bool solve(int level , vector <int> &arr , int k) {
//     int n = arr.size();

//     if(k < 0) return false;

//     if(level >= n) return k == 0;

//     bool ans = false;

//     if(dp[level][k] != -1) return dp[level][k];

//     ans |= solve(level+1 , arr , k);

//     ans |= solve(level+1 , arr , k-arr[level]);

//     return dp[level][k] = ans;
// }
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    // sort(arr.begin() , arr.end());
    // memset(dp , -1 , sizeof(dp));
    // bool ans = solve(0 , arr , k);
    // return ans;

    vector <vector<int>> dp(n+1 , vector<int>(k+1 , 0));

    for(int i = 0 ; i <= n ; i++) {
        for(int j = 0 ; j <= k ; j++) {
            if(i == 0) dp[i][j] = 0;

            if(j == 0) dp[i][j] = 1;
        }
    }

    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= k ; j++) {
            if(arr[i-1] <= j) {
                dp[i][j] = (dp[i-1][j] || dp[i-1][j-arr[i-1]]);
            }

            else dp[i][j] = dp[i-1][j];
        }
    }
    
    bool ans = dp[n][k];

    return ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.
int t;
cin>>t;
while(t--){
           
}
return 0;
}