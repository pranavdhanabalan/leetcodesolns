class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> order;
        for (int i=0;i<stones.size();i++){
            order[stones[i]]++;
        }
        int sum=0;
        for (int i=0;i<jewels.size();i++){
            sum+=order[jewels[i]];
        }
        return sum;
    }
};