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
    int leastInterval(vector<char>& tasks, int n) {
        //..................greedy h yrr............
        vector <int> f(26 , 0);
        for(int i = 0 ; i < tasks.size() ; i++) f[tasks[i] - 'A']++;

        sort(f.begin() , f.end() , greater<int>());

        //max freq wale k bich m sbko bhro
        //bcs rem sabhi ka freq <= mx 

        int ideal = (f[0] - 1) * n; //intially itne ideal chaie agr koi task na ho mx k bich m 
        //ab task to daalna suru krenge

        for(int i = 1 ; i < 26 ; i++) {
            ideal -= min(f[0]-1 , f[i]);
        }

        //if ideal is neg at end -> we filled more works than req -> isse koi dikkat nhi h
        int ans = (int) tasks.size() + max(0 , ideal);

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