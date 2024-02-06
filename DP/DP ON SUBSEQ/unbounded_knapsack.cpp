// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

#include<bits/stdc++.h>

int dp[1002][1002];
int solve(int level , vector <int> &profit , vector <int> &weight , int k) {
    int n = weight.size();
    if(level >= n) {
        if(k == 0) return 0;
        return -1e9;
    }

    int ans = 0;

    if(dp[level][k] != -1) return dp[level][k];

    ans = max(ans , solve(level+1 , profit , weight , k));

    if(weight[level] <= k) ans = max(ans , profit[level] + solve(level , profit , weight ,  k-weight[level]));

    return dp[level][k] = ans;
}
int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
    // Write Your Code Here.
    memset(dp , -1 , sizeof(dp));
    int ans = solve(0 , profit , weight , w);
    
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