class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        stack<int> s;
        int n = q.size();
        if(n<k) return q;
        for(int i =0; i<k;i++){
           int f = q.front();
           q.pop();
           s.push(f);
        }
        for(int i =0;i<k;i++){
            int t= s.top();
            s.pop();
            q.push(t);
        }
        for(int i=0;i<n-k;i++){   
           int f=q.front();
           q.pop();
           q.push(f);
       }  

        return q;
    }
};