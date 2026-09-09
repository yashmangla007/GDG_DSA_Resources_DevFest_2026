class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> res(n,0);
        for(auto x: arr){
            res[x-1]++;
        }
        return res;
    }
};
