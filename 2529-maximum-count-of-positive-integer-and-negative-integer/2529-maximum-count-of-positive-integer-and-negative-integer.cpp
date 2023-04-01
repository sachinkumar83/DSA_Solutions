class Solution {
public:
    int maximumCount(vector<int>& nums) {
       // vector<int>::iterator it_low, it_high;
        vector<int>::iterator it_low, it_high;
        int num_neg, num_pos, n = nums.size();

     
        it_low = lower_bound(nums.begin(), nums.end(), 0);
        it_high = upper_bound(nums.begin(), nums.end(), 0);
        cout<<it_low - nums.begin();
        cout<<it_high - nums.begin();
        
        num_neg = it_low - nums.begin();
        num_pos = n - (it_high - nums.begin());
        
        return max(num_neg, num_pos);
    }
};