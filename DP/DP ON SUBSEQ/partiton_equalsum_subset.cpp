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
    int dp[202][10002];
    bool solve(int level , int sum , vector <int> &nums) {
        int n = nums.size();

        if(level >= n) return sum == 0;

        bool ans = false;

        if(dp[level][sum] != -1) return dp[level][sum];

        ans |= solve(level+1 , sum , nums);

        if(nums[level] <= sum) {
            ans |= solve(level+1 , sum-nums[level] , nums);
        }

        return dp[level][sum] = ans;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            sum += nums[i];
        }

        if(sum & 1) return false;

        memset(dp , -1 , sizeof(dp));
        bool ans = solve(0 , sum/2 , nums);
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