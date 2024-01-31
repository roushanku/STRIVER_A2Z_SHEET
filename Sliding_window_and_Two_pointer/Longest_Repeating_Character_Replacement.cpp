// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

int mx_count (vector <int> &f) {
    int ct = *max_element(f.begin() , f.end());
    return ct;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.
int t;
cin>>t;
while(t--){
    int k;
    cin>>k;

    string s;
    cin>>s;

    vector <int> f(26 , 0);

    int n = s.size();

    int ans = 0 , i = 0 , j = 0;

    while(j < n) {
        f[s[j]-'a']++;

        while((j-i+1) - mx_count(f) > k) {
            f[s[i]-'a']--;
            i++;
        }

        ans = max(ans , j-i+1);
        j++;
    }
    cout<<ans<<"\n";
}
return 0;
}