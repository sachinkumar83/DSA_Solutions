class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mini=p[0]; int maxiShare=0,maxi=0;
        for(int i=1;i<p.size();i++){
            if(mini < p[i] ){
                maxiShare=p[i]-mini;
                maxi=max(maxiShare,maxi);
            }
            else mini=p[i];
        }
        return maxi;
    }
};