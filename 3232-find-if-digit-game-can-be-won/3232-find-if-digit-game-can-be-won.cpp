class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sumsingle=0,sumdouble=0;
        for(int i=0;i<nums.size();i++){
            if (nums[i]<10)
                sumsingle+=nums[i];
            else
                sumdouble+=nums[i];
        }
        if (sumsingle==sumdouble)
            return false;
        return true;
    }
};