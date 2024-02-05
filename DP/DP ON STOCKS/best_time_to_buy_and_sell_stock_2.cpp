// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

// greedy logic
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int prev = prices[0];
        int n = prices.size();

        //greedy logic -> if u r in profit sell the stock and buy the same stock
        for(int i = 1 ; i < n ; i++) {
            //selling the stock
            if(prices[i] > prev) {
                ans += (prices[i] - prev);
                prev = prices[i];
            }
            else prev = prices[i]; //if you are getting stock at lower rate sell the stock
        }

        return ans;
    }
};

//DP approach -> rec + memo
class Solution {
public:
    int dp[30003][2];
    int solve(int level , int buy , vector <int> &nums) {
        int n = nums.size();

        if(level >= n) return 0;

        int ans = 0;

        if(dp[level][buy] != -1) return dp[level][buy];

        ans = max(ans , solve(level+1 , buy , nums)); // do nothing

        if(buy == 0) {
            ans = max(ans , -nums[level] + solve(level+1 , 1 , nums)); //nhi kharede ho to kharid lo
        }

        else{
            ans = max(ans , nums[level] + solve(level+1 , 0 , nums)); //bech do ab
        }

        return dp[level][buy] = ans;
    }
    int maxProfit(vector<int>& prices) {
        memset(dp , -1 ,sizeof(dp));
        int ans = solve(0 , 0 , prices);
        return ans;
    }
};

//tabulation apr -> eact rec + memo wla hi h

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector <vector <int>> dp(n+1 , vector <int>(2 , -1));

        dp[n][0] = dp[n][1] = 0; //base condn
        
        for(int i = n-1 ; i >= 0 ; i--) {
            for(int buy = 0 ; buy <= 1 ; buy++) {
                if(buy == 0) {
                    dp[i][buy] = max({dp[i][buy] , dp[i+1][buy] , -prices[i] + dp[i+1][1]});
                }

                else{
                    dp[i][buy] = max({dp[i][buy] , dp[i+1][buy] , prices[i] + dp[i+1][0]});
                }
            }
        }

        int ans = dp[0][0]; //max profit on last when we dont hold the stock
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