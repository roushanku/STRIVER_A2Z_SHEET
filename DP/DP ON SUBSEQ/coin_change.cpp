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
    int dp[13][10002];
    int solve(int level , int k , vector <int> &nums) {
        int n = nums.size();

        if(k == 0) return 0;
        if(level >= n) {
            if(k == 0) return 0;
            return 1e9;
        }

        int ans = 1e9;

        if(dp[level][k] != -1) return dp[level][k];

        ans = min(ans , solve(level+1 , k , nums));

        if(nums[level] <= k) ans = ans = min(ans , 1 + solve(level , k-nums[level] , nums));

        return dp[level][k] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp , -1 ,sizeof(dp));
        int ans = solve(0 , amount , coins);
        if(ans == 1e9) return -1;
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