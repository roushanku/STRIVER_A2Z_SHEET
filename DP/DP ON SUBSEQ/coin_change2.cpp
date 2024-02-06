// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

class Solution {
public:
    int dp[302][5002];
    int solve(int level , int k , vector <int> &nums) {
        int n = nums.size();

        if(level >= n) {
            if(k == 0) return 1;
            return 0;
        }

        int ans = 0;

        if(dp[level][k] != -1) return dp[level][k];

        ans = (ans + solve(level+1 , k , nums));

        if(nums[level] <= k) ans = (ans + solve(level , k-nums[level] , nums));

        return dp[level][k] = ans;
    }
    int change(int amount, vector<int>& coins) {
        memset(dp , -1 , sizeof(dp));
        int ans = solve(0 , amount , coins);
        return ans;
    }
};
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