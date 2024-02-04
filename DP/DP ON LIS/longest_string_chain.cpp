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
    bool IsSubSeq(string a , string b) {

        int n = b.size() , m = a.size();

        if(m+1 != n) return false;

        int i = 0 , j = 0;

        while(j < n) {
            if(a[i] == b[j]) {
                i++;
                j++;
            }

            else j++;
        }

        return i == m;
    }

    static bool compare(string a , string b) {
        if(a.size() == b.size()) return a < b;
        return a.size() < b.size();
    }
    
    int longestStrChain(vector<string>& words) {
        sort(words.begin() , words.end() , compare);
        int n = words.size();

        vector <int> dp(n , 0);
        
        for(int i = 0 ; i < n ; i++) {
            dp[i] = 1;
            for(int j = 0 ; j < i ; j++) {
                if(IsSubSeq(words[j] , words[i]) && dp[i] < dp[j] + 1) dp[i] = 1 + dp[j];
            }
        }

        int ans = -1;
        for(int i = 0 ; i < n ; i++) ans = max(ans ,dp[i]);

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