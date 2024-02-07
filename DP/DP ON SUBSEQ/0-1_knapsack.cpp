// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	// int ans = solve(0 , weight , value , maxWeight);
	// return ans;

	vector <vector<int>> dp(n+1 , vector<int>(maxWeight+1 , 0));

	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j <= maxWeight ; j++) {
			if(weight[i-1] <= j) {
				dp[i][j] = max(dp[i-1][j] , value[i-1] + dp[i-1][j-weight[i-1]]);
			}

			else dp[i][j] = dp[i-1][j];
		}
	}

	int ans = dp[n][maxWeight];

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