// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

int dp[1002][1002];
int solve(int i , int j , int* arr) {
    if(i == j) return 0;

    int ans = 1e9;

    if(dp[i][j] != -1) return dp[i][j];

    for(int k = i ; k < j; k++) {
        ans = min(ans , arr[i-1] * arr[k] * arr[j] + solve(i,k,arr) + solve(k+1,j,arr));
    }

    return dp[i][j] = ans;
}
int matrixChainMultiplication(int* arr, int n) {
    // Write your code here
    memset(dp , -1 , sizeof(dp));
    int ans = solve(1 , n , arr);
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