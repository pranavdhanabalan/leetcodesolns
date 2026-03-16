class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementssum=0,digitsum=0;
        for (int i=0;i<nums.size();i++){
            elementssum+=nums[i];
        }
        for (int i=0;i<nums.size();i++){
            while(nums[i]>0){
                digitsum+=nums[i]%10;
                nums[i]/=10;
            }
        }
        return abs(elementssum-digitsum);
    }
};