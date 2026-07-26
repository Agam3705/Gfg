class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        stack<int> s;
        while(!q.empty()){
            int f =  q.front();
            q.pop();
            s.push(f);
        }
        while(!s.empty()){
            int t =  s.top();
            s.pop();
            q.push(t);
        }
        
    }
};