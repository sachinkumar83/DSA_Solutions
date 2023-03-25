class Solution
{
    public:
        int findPairs(vector<int> &nums, int k)
        {
            int cnt = 0;
            map<int, int> mp;
            for (auto i: nums)
                mp[i]++;

            for (auto i: mp)
            {
                if ((k > 0 && mp.find(i.first + k) != mp.end()) || (k == 0 && mp[i.first] > 1))
                    cnt++;
            }

            return cnt;
        }
};