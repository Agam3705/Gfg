class Solution {
  public:
    bool isPalindrome(string& s) {
       stack<char> st;
       for(char x: s){
           st.push(x);
       }
       for(int i =0; i<s.length();i++){
           if(s[i]!=st.top()) return 0;
           st.pop();
       }
       return 1;
        
    }
};