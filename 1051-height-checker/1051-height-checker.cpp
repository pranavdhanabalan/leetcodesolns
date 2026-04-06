class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> nums=heights;
        for (int i=0;i<nums.size();i++){
            for (int j=0;j<nums.size()-i-1;j++){
                if (nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        int c=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=heights[i]){
                c++;
            }
        }
        return c;
    }
};