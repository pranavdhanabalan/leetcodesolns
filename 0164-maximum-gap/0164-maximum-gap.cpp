class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size()<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int maxi=0;
        for (int i=nums.size()-1;i>0;i--){
            maxi=max(maxi,nums[i]=nums[i]-nums[i-1]);
        }
        return maxi;
    }
};