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
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector <int> lis;

        // for(int i = 0 ; i < n ; i++) {
        //     for(int j = i ; j >= 0 ; j--) {
        //         if(nums[i] > nums[j]) lis[i] = max(lis[i] , 1 + lis[j]);
        //     }
        // }

        // int ans = -1;
        // for(int i = 0 ; i < n ; i++) {
        //     ans = max(ans , lis[i]);
        // }

        // return ans;

        //let use binary Search

        for(int i = 0 ; i < n ; i++) {
            int l = lower_bound(lis.begin() , lis.end() , nums[i]) - lis.begin();

            if(l >= lis.size()) lis.push_back(nums[i]);

            else lis[l] = nums[i];
        }

        int ans = lis.size();
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