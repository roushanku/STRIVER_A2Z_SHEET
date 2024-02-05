// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

//rec + memo

class Solution {
public:
    int dp[50003][2];
    int solve(int level , int buy , int fee , vector <int> &nums) {
        int n = nums.size();

        if(level >= n) return 0;

        int ans = 0;

        if(dp[level][buy] != -1) return dp[level][buy];

        ans = max(ans , solve(level+1 , buy , fee , nums));

        if(buy == 0) {
            ans = max(ans , -nums[level] + solve(level+1 , 1 , fee , nums));
        }

        else{
            ans = max(ans , nums[level] - fee + solve(level+1 , 0 , fee , nums));
        }

        return dp[level][buy] = ans;
    }
    int maxProfit(vector<int>& prices, int fee) {
        memset(dp , -1 , sizeof(dp));
        int ans = solve(0 , 0 , fee , prices);
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