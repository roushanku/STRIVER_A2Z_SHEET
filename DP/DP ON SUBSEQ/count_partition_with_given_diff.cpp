// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

#include <bits/stdc++.h> 
const int mod = 1e9 + 7;

int dp[51][2503];
int solve(int level , int k , vector <int> &arr) {
    int n = arr.size();

    if(level >= n) {
        if(k == 0) return 1;
        return 0;
    }

    int ans = 0;

    if(dp[level][k] != -1) return dp[level][k];

    ans = (ans % mod + solve(level+1 , k , arr) % mod) % mod;

    if(arr[level] <= k) ans = (ans % mod + solve(level+1 , k-arr[level] , arr) % mod) % mod;

    return dp[level][k] = ans;
}
int countPartitions(int n, int d, vector<int> &arr) {
    // Write your code here.
    //s1 + s2 = sum 
    //s1- s2 = d
    //s1 = (sum+d)/2
    int sum = 0;
    for(int i = 0 ; i < arr.size() ; i++) sum += arr[i];
    int temp = (sum + d);

    if(temp & 1) return 0;

    memset(dp , -1 , sizeof(dp));

    int ans = solve(0 , temp/2 , arr);
    return ans;
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
           
}
return 0;
}