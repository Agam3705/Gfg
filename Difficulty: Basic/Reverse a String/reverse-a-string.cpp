class Solution {
  public:
    string reverseString(string& s) {
        // code here
        stack<char> st;
        string ans=  "";
        for(char x:s){
            st.push(x);
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
