class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        vector<int> ft;int j;
        for(int i=0;i<n-1;i++){
            
            for(int j=i+1;j<n;j++){
                
              if ((nums[i]+nums[j])==target )
               {
                 ft.push_back(i);
                  ft.push_back(j);
               }     
            }     
       }
        return ft;
       
    }
};