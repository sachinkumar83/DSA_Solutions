class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n=nums.size();
        for(auto i : mp){
            if(i.second==n/2) return i.first;
        }
        return -1;
    }
};