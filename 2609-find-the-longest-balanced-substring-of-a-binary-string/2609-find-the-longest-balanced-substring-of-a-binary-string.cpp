class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        
        int n = s.length() , i = 0 , maxLen = 0;
        while(i<n)
        {
            int zeroes = 0 , ones = 0;
            while(i<n && s[i] == '0')
            {
                i++;
                zeroes++;
            }
            while(i<n && s[i] == '1')
            {
                ones++;
                i++;
            }
            
            maxLen = max(maxLen , 2*min(ones , zeroes));
        }
        
        return maxLen;
        
    }
};