class Solution {
  public:
    vector<int> queueTraversal(queue<int>& q) {
        vector<int> ans;
        while(!q.empty()){
            int f = q.front();
            q.pop();
            ans.push_back(f);
        }
        return ans;
        
    }
};