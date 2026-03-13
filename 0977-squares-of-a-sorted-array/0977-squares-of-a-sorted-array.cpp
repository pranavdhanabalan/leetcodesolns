class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
                nums[i]=(nums[i]*nums[i]);
                i++;
        }
        for (int i=0;i<nums.size()-1;i++){
            for (int j=0;j<nums.size()-1;j++){
                if (nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        return nums;
    }
};