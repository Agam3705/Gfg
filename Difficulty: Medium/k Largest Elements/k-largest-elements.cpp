class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        vector<int> ans;
        int n = arr.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i =0; i<n;i++){
            pq.push(arr[i]);
            if(pq.size()>k){
                pq.pop();
            }
        }
        for(int i =0; i<k;i++){
            int f = pq.top();
            pq.pop();
            ans.push_back(f);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};