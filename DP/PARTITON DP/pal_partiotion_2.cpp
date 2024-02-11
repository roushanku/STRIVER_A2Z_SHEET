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
    int pal[2002][2002];
    int dp[2002];

    int solve(int i , int n , string s) {
        if(i == n) return 0;

        if(pal[i][n-i+1]) return 0;
        
        int ans = 1e9;

        if(dp[i] != -1) return dp[i];

        for(int k = i ; k < n ; k++) {
            if(pal[i][k-i+1] == 1) {
                ans = min(ans , 1 + solve(k+1 , n , s));
            }
        }

        return dp[i] = ans;
    }
    int minCut(string s) {
        int n = s.size();

        for(int i = 0 ; i < n ; i++) pal[i][1] = 1;

        for(int i = 0 ; i < n-1 ; i++) {
            if(s[i] == s[i+1]) pal[i][2] = 1;
        }

        for(int size = 3 ; size <= n ; size++) {
            for(int i = 0 ; i < n ; i++) {
                int j = i , k = j+size-1;
                //starting id , k = ending id

                if(k < n && j < n-1 && pal[j+1][size-2] && s[j] == s[k]) pal[j][size] = 1;
            }
        }

        memset(dp , -1 , sizeof(dp));
        int ans = solve(0 , n , s);
        return ans-1;
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