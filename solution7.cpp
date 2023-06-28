#include<bits/stdc++.h>
using namespace std;
class solution7{
    public:
    vector<vector<int>>ranges(vector<int>nums, int lower, int upper){
        vector<vector<int>>ans;
        int n=nums.size();
        if(nums[0]>lower){
            vector<int>v;
            v.push_back(lower);
            v.push_back(nums[0]-1);
            ans.push_back(v);
        }
        for(int i=0; i<n-1; i++){
            if(nums[i+1]-nums[i]>1){
                vector<int>v;
                v.push_back(nums[i]+1);
                v.push_back(nums[i+1]-1);
                ans.push_back(v);
            }
        }
        if(nums[n-1]<upper){
            vector<int>v;
            v.push_back(nums[n-1]+1);
            v.push_back(upper);
            ans.push_back(v);
        }
        return ans;
    }
};