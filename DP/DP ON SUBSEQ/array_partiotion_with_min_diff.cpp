// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

//what about neg ele
int minSubsetSumDifference(vector<int>& arr, int n)
{
	// Write your code here.

	int sum = 0;

	for(int i = 0 ; i < n ; i++) sum += arr[i];

	vector <vector<int>> dp(n+1 , vector<int>(sum+1));

	//base case
	for(int i = 0 ; i <= n ; i++) {
		for(int j = 0 ; j <= sum ; j++) {
			if(i == 0) dp[i][j] = 0;

			if(j == 0) dp[i][j] = 1;
		}
	}

	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j <= sum ; j++) {
			if(arr[i-1] <= j) {
				dp[i][j] = (dp[i-1][j] || dp[i-1][j-arr[i-1]]);
			}

			else dp[i][j] = dp[i-1][j];
		}
	}

	vector <int> v;

	for(int i = 0 ; i <= sum/2 ; i++) {
		if(dp[n][i]) {
			v.push_back(i);
			cout<<i<<" ";
		}
	}

	//s1 + s2 = sum
	//s1 - s2 => s1 - sum + s1 => 2*s1 - sum

	int mn = INT_MAX;

	for(int i = 0 ; i < v.size() ; i++) {
		mn = min(mn , sum - 2*v[i]);
	}

	return mn;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.
vector <int> nums = {8 , 6 ,5};
int ans = minSubsetSumDifference(nums , 3);
cout<<ans<<"\n";
return 0;
}