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
    int subarraysWithAtmostKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map <int,int> mp;
        int i=0,j=0;
        int ans=0;

        while(j<n){
            mp[nums[j]]++;

            while(mp.size() > k) {
                mp[nums[i]]--;
                if(mp[nums[i]] == 0) mp.erase(nums[i]);
                i++;
            }

            ans += (j-i+1);
            
            j++;
        }

        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        //subarraysWithKDistinct(k) = subarraysWithAtmostKDistinct(k) - subarraysWithAtmostKDistinct(k-1)
        return subarraysWithAtmostKDistinct(nums,k) - subarraysWithAtmostKDistinct(nums,k-1);
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