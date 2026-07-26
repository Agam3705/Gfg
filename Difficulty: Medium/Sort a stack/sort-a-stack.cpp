class Solution {
  public:
    void sortStack(stack<int> &st) {
        vector<int> v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        sort(v.begin(),v.end());
        for(int i =0; i<v.size();i++){
            st.push(v[i]);
        }
        
        
    }
};
