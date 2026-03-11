class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        for (int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if (i==j)
                    continue;
                if (((nums[i]|nums[j])&1)==0){
                    return true;
                }
            }
        }
        return false;
    }
};