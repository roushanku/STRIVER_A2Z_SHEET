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
    int numberOfSubstrings(string s) {
        int a = 0 , b = 0 , c = 0;
        int n = s.size();
        int i = 0 , j = 0 , ans = 0;

        while(j < n) {
            if(s[j] == 'a') a++;
            if(s[j] == 'b') b++;
            if(s[j] == 'c') c++;

            while(a > 0 && b > 0 && c > 0) {
                ans += (n-j);
                if(s[i] == 'a') a--;
                if(s[i] == 'b') b--;
                if(s[i] == 'c') c--;
                i++;
            }
            j++;
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