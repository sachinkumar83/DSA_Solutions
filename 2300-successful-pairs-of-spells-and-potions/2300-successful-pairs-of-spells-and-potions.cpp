class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        int n = spells.size() , m = potions.size();
         sort(potions.begin() , potions.end());
        
        vector<int> res;
        for(long long s:spells)
        {
            int l = 0 , h = m-1;
            while(l<=h)
            {
                long long mid = (l+h)/2;
            
                if(s*potions[mid] >= success)
                    h = mid-1;
                else
                    l = mid+1;
            }
            
            res.push_back(m-l);
        }
        
        return res;

    }
};