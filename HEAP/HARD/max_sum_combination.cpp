// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

//idea is to first put sum of B[m-1] + A[i] and after that on each iteration put A[i] + B[j-1]
vector<int> solve(vector<int> &A, vector<int> &B, int C) {
    vector <int> ans;
    
    priority_queue <vector <int>> pq;
    
    sort(A.begin() , A.end());
    sort(B.begin() , B.end());
    int m = B.size();
    
    for(int i = 0 ; i < A.size() ; i++) pq.push({A[i] + B[m-1] , i , m-1});
    
    while(!pq.empty() && C--) {
        auto it = pq.top();
        pq.pop();
        
        ans.push_back(it[0]);
        int i = it[1] , j = it[2];
        
        if(j > 0) pq.push({A[i]+B[j-1] , i , j-1});
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