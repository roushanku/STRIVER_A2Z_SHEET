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
    int dp[502];
    int solve(int level , int k , vector <int> &arr) {
        int n = arr.size();
        if(level >= n) return 0;

        if(dp[level] != -1) return dp[level];

        int ans = 0;

        int mx = -1;

        //subarr of atmost len k
        for(int i = level ; i<= min(level+k-1 , n-1) ; i++) {
            mx = max(mx , arr[i]);
            ans = max(ans , (i-level+1) * mx + solve(i+1 , k , arr));
        }

        return dp[level] = ans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        memset(dp , -1 , sizeof(dp));
        int ans = solve(0 , k , arr);
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