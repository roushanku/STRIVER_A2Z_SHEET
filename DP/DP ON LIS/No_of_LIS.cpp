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
    int findNumberOfLIS(vector<int>& nums) {
        // Then ct[i] will be the count of the number of longest increasing subsequences where 
        // each LIS ends where arr[i] is the last element of the subsequence.

        int n = nums.size();

        vector <int> dp(n);
        vector <int> ct(n);

        for(int i = 0 ; i < n ; i++) {
            dp[i] = 1;
            ct[i] = 1;

            for(int j = 0 ; j < i ; j++) {
                if(nums[j] < nums[i]) {
                    // in this case we get a new LIS of greater length, therefore the number of LIS ending at arr[i], is the same as number of LIS ending 
                    // at arr[j] as we simply append the element arr[j] to all those LIS
                    if(dp[i] < dp[j]+1) {
                        dp[i] = dp[j]+1;
                        ct[i] = ct[j];
                    }
                    // in this case we get a new LIS of same length at which the ct[i] is originally holding 
                    // the value for. Therefore the new ct[j] value will be the number of LIS that was given 
                    // by its original value plus the number of LIS that ends at element arr[j] at length dp[j].
                    else if(dp[i] == dp[j]+1) ct[i] += ct[j];
                }
            }
        }

        int mx = 0;
        for(int i = 0 ; i < n ; i++) mx = max(mx , dp[i]);
        int ans = 0;
        for(int i = 0 ; i < n ; i++) {
            if(dp[i] == mx) ans += ct[i];
        }

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