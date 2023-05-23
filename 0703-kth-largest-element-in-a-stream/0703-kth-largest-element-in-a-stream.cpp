class KthLargest {
public:
    priority_queue<int , vector<int> , greater<int>>q;
    int kth;
    KthLargest(int k, vector<int>& nums) {
        
         for(auto i:nums)
         {
             q.push(i);
             
             if(q.size() > k)
                 q.pop();
         }
        kth =k;

    }
    
    int add(int val) {
       q.push(val);  
        
        if(q.size() > kth)
            q.pop();
        
        return q.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */