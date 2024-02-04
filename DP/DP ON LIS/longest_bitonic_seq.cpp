// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key
int longestBitonicSubsequence(vector<int>& arr, int n)
{
	// Write your code here.
	vector <int> lis(n , 0);
	vector <int> revlis(n ,0);

	for(int i = 0 ; i < n ; i++) {
		lis[i] = 1;

		for(int j = 0 ; j < i ; j++) {
			if(arr[j] < arr[i] && lis[i] < 1+lis[j]) lis[i] = lis[j]+1;
		}
	}

	for(int i = n-1 ; i >= 0 ;i--) {
		revlis[i] = 1;
		for(int j = n-1 ; j > i ; j--) {
			if(arr[j] < arr[i] && revlis[i] < revlis[j]+1) revlis[i] = 1 + revlis[j];
		}
	}

	int ans = 0;
	for(int i = 0 ; i < n ; i++) {
		ans = max(ans , lis[i]+revlis[i]-1);
	}

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