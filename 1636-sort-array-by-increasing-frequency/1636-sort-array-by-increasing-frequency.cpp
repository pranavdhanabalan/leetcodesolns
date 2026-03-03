class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> order;
        vector<int> ans;
        for (int i=0;i<nums.size();i++){
            order[nums[i]]++;
        }
        while (!order.empty()){
            int max=INT_MIN;
            int key=0;
            for (auto it: order){
                if (it.second==max){
                    if (it.first<key){
                        max=it.second;
                        key=it.first;
                    }
                    else{
                        continue;
                    }
                }
                else if (it.second>max){
                    max=it.second;
                    key=it.first;
                }
            }
            for (int i=0;i<max;i++){
                ans.push_back(key);
            }
            order.erase(key);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};