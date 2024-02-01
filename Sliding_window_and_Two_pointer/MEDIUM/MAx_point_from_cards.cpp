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
    int maxScore(vector<int>& cardPoints, int k) {
        //lets change the orientaion of question : if you see its actually to get max by given action =>  total_sum - min subarr
        // of size n-k
        int n = cardPoints.size();
        int m = n-k;

        int temp = 0;
        for(int i = 0 ; i < n ; i++) temp += cardPoints[i];

        if(m == 0) return temp;

        int i = 0 , j = 0 , sum = 0 , mn = 1e9;

        while(j < n) {
            sum += cardPoints[j];

            if(j-i+1 == m) {
                mn = min(sum , mn);
                sum -= cardPoints[i];
                i++;
            }

            j++;
        }


        int ans = temp - mn;

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