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
    bool isNStraightHand(vector<int>& hand, int k) {
        int n = hand.size();

        map <int,int> mp;

        for(int i = 0 ; i < n ; i++) mp[hand[i]]++;

        for(auto it : mp) {
            int start = it.first;
            int ct = it.second;

            for(int i = 1 ; i <= ct ; i++) {
                for(int j = start+1 ; j <= start+k-1 ; j++) {
                    if(mp.find(j) == mp.end()) return false;

                    else{
                        mp[j]--;
                        if(mp[j] == 0) mp.erase(j);
                    }
                }
            }
        }

        return true;
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