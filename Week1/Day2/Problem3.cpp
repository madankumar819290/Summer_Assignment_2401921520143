class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double numsum=0;
        for(int i=0;i<k;i++){
            numsum+=nums[i];
        }
        double  maxsum=numsum;
        for(int i=k;i<nums.size();i++){
            numsum+=nums[i]-nums[i-k];
            maxsum=max(maxsum,numsum);
        }
        return maxsum/k;
    }
};
