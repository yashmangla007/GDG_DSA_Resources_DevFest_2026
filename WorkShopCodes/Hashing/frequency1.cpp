class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> res(n,0);
        for(int i=1;i<=n;i++){
            for(auto x: arr){
                if(x==i) res[i-1]++;
            }
        }
        return res;
    }
};
