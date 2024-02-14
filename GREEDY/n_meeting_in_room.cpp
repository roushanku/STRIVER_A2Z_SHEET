// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

static bool comp (pair<int,int> &a , pair<int,int> &b) {
        return a.second < b.second; 
    }
    
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector <pair<int,int>> v;
        
        for(int i = 0 ; i < n ; i++) v.push_back({start[i] , end[i]});
        
        sort(v.begin() , v.end() , comp);
        
        int last = v[0].second , ans = 1;
        
        for(int i = 1 ; i < n ; i++) {
            if(v[i].first > last) {
                ans++;
                last = v[i].second;
            }
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