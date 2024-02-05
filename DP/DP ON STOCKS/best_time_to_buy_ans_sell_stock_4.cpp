// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

// same as ques 3
class Solution {
public:
    int dp[1002][2][102];
    int solve(int level , int buy , int ct , int k , vector <int> &nums) {
        int n = nums.size();
        if(level >= n) return 0;

        int ans = 0;

        if(dp[level][buy][ct] != -1) return dp[level][buy][ct];

        ans = max(ans , solve(level+1 , buy , ct , k , nums));

        if(buy == 0) {
            ans = max(ans , -nums[level] + solve(level+1 , 1 , ct , k , nums));
        }

        else{
            if(ct < k) {
                ans = max(ans , nums[level] + solve(level+1 , 0 , ct+1 , k , nums));
            }
        }

        return dp[level][buy][ct] = ans;
    }
    int maxProfit(int k, vector<int>& prices) {
        memset(dp , -1 , sizeof(dp));
        int ans = solve(0 , 0 , 0 , k , prices);
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