// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

vector<int> printingLongestIncreasingSubsequence(vector<int> arr, int n) {
	// Write your code here
	vector <int> dp(n , 0);
	vector <int> last(n , -1);
	for(int i = 0 ; i < n ; i++) {
		dp[i] = 1;
		last[i] = i;
		for(int j = 0 ; j < i ; j++) {
			if(arr[j] < arr[i] && dp[i] < 1+dp[j]) {
				dp[i] = 1 + dp[j];
				last[i] = j;
			} 
		}
	}

	int mx = -1;
	int id = -1;
	for(int i = 0 ; i < n ; i++) {
		if(mx < dp[i]) {
			mx = dp[i];
			id = i;
		}
	}

	vector <int> lis;
	lis.push_back(arr[id]);

	while(last[id] != id) {
		id = last[id];
		lis.push_back(arr[id]);
	}

	reverse(lis.begin() , lis.end());

	return lis;
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