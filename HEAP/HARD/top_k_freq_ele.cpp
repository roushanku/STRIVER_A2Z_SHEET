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
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue <pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;
        unordered_map <int,int> mp;
        
        int n = nums.size();
        
        for(int i = 0 ; i < n ; i++) {
            mp[nums[i]]++;
        }
        
        for(auto it:mp) {
            pq.push({it.second,it.first});
            if(pq.size() > k) pq.pop();
        }
        
        int ct = 0;
        vector <int> ans;
        while(ct < k){
            ans.push_back(pq.top().second);
            pq.pop();
            ct++;
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