/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int widthOfBinaryTree(TreeNode* root) {
         if(root==NULL) return 0;
   int res=1;
   queue<pair<TreeNode*,int>>q;
   q.push({root,0});

   while(!q.empty()){
     int n=q.size();
     int first=q.front().second;
     int last=q.back().second;
      res=max(res,last-first+1);
       //cout<<"hi"<<res<<endl;
       while(n--){
         pair<TreeNode*,int>p=q.front();
         int idx=p.second-first;
         q.pop();
         if(p.first->left != NULL) q.push({p.first->left,(long long)2*idx+1});
         if(p.first->right !=NULL) q.push({p.first->right,(long long)2*idx+2});
       }
   }
  
   return res;
    }
};