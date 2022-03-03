#include<iostream>

#include<vector>

using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int cnt=0,ans=0;
        
        if(nums.size()<3)return ans;
        
        for(int i=1;i<nums.size()-1;i++){
            
            if(2*nums[i]==nums[i-1]+nums[i+1]){
                cnt++;
                ans+=cnt;
            }
            
            else cnt=0;
            
        }
        
        return ans;
        
    }
};