class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int pf[n+1];
        pf[0] = 0;
        for(int i=0;i<n;i++){
            pf[i+1] = pf[i]+nums[i];
        }
        for(int i=0;i<n;i++){
            int left = pf[i]; //sum before me
            int right = pf[n] - left - nums[i]; //total sum - me - left part;
            if(left==right) return i;
        }
        return -1;
    }
};