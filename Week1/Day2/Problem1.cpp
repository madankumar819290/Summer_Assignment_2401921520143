class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0,maxsum=nums[0],currentsum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(currentsum<0){
               // maxsum=0;
                currentsum=0;
            }
            currentsum=currentsum+nums[i];
            maxsum=max(maxsum,currentsum);
        }
        return maxsum;
    }
};
