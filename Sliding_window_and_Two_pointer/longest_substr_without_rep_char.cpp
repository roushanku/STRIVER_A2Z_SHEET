// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;

    int ans = 0;
    map <char , int> mp;

    int i = 0 , j = 0;
    int n = s.size();
    int ans = 0;

    while(j < n) {
        mp[s[j]]++;

        while(mp.size() < j-i+1) {
            mp[s[i]]--;
            if(mp[s[i]] == 0) mp.erase(s[i]);
            i++;
        }

        ans = max(ans , j-i+1);
        j++;
    }      

    cout<<ans<<"\n";
}
return 0;
}