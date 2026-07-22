class Solution {
  public:
    vector<vector<int>> ans;
    void helper(int n,vector<int>& c, vector<int>& ld, vector<int>& rd, vector<int>& psf, int i){
        if(i==n){
            ans.push_back(psf);
        }
        
        for(int j =0; j<n;j++){
            if(c[j]==0 && ld[i+j]==0 && rd[i-j+n-1]==0){
                c[j]=1;
                ld[i+j]=1;
                rd[i-j+n-1]=1;
                psf.push_back(j+1);
                helper(n,c,ld,rd,psf,i+1);
                psf.pop_back();
                c[j]=0;
                ld[i+j]=0;
                rd[i-j+n-1]=0;
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        vector<int> c(n,0);
        vector<int> ld(2*n-1,0);
        vector<int> rd(2*n-1,0);
        vector<int> psf;
        helper(n,c,ld,rd,psf,0);
        return ans;
        
    }
};