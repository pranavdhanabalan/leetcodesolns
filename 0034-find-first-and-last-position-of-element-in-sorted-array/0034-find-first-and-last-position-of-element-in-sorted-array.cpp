class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int c=0,min;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==target){
                c++;
            }
        }
        for (int i=0;i<nums.size();i++){
            if (nums[i]==target){
                min=i;
                break;
            }
        }
        if (c==0){
            return {-1,-1};
        }
        else if(c==1){
            return {min,min};
        }
        return {min,min+c-1};
    }
};