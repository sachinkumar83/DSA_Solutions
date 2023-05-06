class Solution
{
    public:

        bool isVowel(char c)
        {
            char ch = tolower(c);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
            else return false;
        }

    
    int maxVowels(string s, int k)
    {

        int ans=0; int cnt=0;
        for (int i = 0; i < s.size(); i++)
        {   
           if(i>=k && isVowel(s[i-k]) ) cnt--; 
            
           if(isVowel(s[i])) cnt++;
            
           ans=max(ans,cnt); 
        }
        return ans;
    }
};