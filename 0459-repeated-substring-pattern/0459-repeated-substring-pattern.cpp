class Solution {
public:
    bool repeatedSubstringPattern(string s) {
    string S=s+s;    
       if(S.find(s,1)!=-1 && S.find(s,1)<s.size()) 
           return true;
       
       return false;
    }
};