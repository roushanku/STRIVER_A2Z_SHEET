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
    int Atmost(vector <int> &nums , int k) {
        int n = nums.size() , i = 0 , j = 0;
        int ct = 0 , od = 0;

        while(j < n) {
            if(nums[j] & 1) od++;

            while(od > k) {
                if(nums[i] & 1) od--;
                i++;
            }

            ct += (j-i+1);
            j++;
        }

        return ct;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans = Atmost(nums , k) - Atmost(nums , k-1);
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