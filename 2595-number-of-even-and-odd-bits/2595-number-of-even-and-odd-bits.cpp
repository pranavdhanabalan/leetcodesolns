class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> bits;
        int ones=0,zeroes=0;
        while(n>0){
            bits.push_back(n%2);
            n/=2;
        }
        for (int i=0;i<bits.size();i++){
            if ((i%2==0)&&(bits[i]==1)){
                ones++;
            }
            else if ((i%2!=0)&&(bits[i]==1)){
                zeroes++;
            }
        }
        vector<int> ans={ones,zeroes};
        return ans;
    }
};