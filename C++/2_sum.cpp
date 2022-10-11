#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(auto &i:nums){
        cin>>i;
    }
    int target;
    cin>>target;
    vector<int> res;
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); ++i) {
   	 if (mp.find(target - nums[i]) != mp.end()) {
   		 res.emplace_back(nums[i]);
   		 res.emplace_back(nums[mp[target - nums[i]]]);
   		 break;
   	 }
   	 mp[nums[i]] = i;
    }
    for(auto i:res){
        cout<<i<<" ";
    }
}
