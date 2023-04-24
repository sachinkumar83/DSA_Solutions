class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        
        priority_queue<int>q;
        for(auto i : s) q.push(i);
        
        while(q.size() > 1){
            int y=q.top(); q.pop();
            int x=q.top(); q.pop();
            if(x != y) q.push(y-x);
        }
        
        return q.size() > 0 ? q.top() : 0;
    }
};