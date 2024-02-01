// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.
int t;
cin>>t;
// https://www.codingninjas.com/studio/problems/fruits-and-baskets_985356?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
while(t--){
    vector <int> arr = {1,1,2,3};
    int n = arr.size();
    int i = 0 , j = 0 , ct = 0;
    map <int,int> mp;
    int num;

    while(j < n) {
        mp[arr[j]]++;

        while(mp.size() > 2) {
            mp[arr[i]]--;
            if(mp[arr[i]] == 0) mp.erase(arr[i]);
            i++;
        }

        ct = max(ct , j-i+1);
        num = arr[j];
        j++;
    }

    cout<<ct<<"\n";
}
return 0;
}