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
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        //apr 1 -> uusing prefix and suffix 
        //thought process -> we will sell on each day 1....n , for more profit we need min buy cost and max sell cost
         
        // vector <int> pre(n , 0);
        // vector <int> suf(n , 0);

        
        // pre[0] = prices[0];
        // for(int i = 1 ; i < n ; i++) pre[i] = min(pre[i-1] , prices[i]);

        // suf[n-1] = prices[n-1];

        // for(int i = n-2 ; i >= 0 ; i--) suf[i] = max(suf[i+1] , prices[i]);

        // int ans = 0;

        // for(int i = 1 ; i < n ; i++) {
        //     ans = max(ans , suf[i] - pre[i-1]);
        // }

        // return ans;


        //apr 2 -> sell on ith day

        int ans = 0;
        int mn = prices[0];

        for(int i = 1 ; i < n ; i++) {
            ans = max(ans , prices[i] - mn);
            mn = min(mn , prices[i]);
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