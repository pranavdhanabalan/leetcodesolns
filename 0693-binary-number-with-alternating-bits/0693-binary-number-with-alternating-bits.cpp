class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> order;
        while(n>0){
            order.push_back(n%2);
            n/=2;
        }
        reverse(order.begin(),order.end());
        if (order[0]==0){
            for (int i=0;i<order.size();i+=2){
                if (order[i]!=0){
                    return false;
                }
            }
            for (int i=1;i<order.size();i+=2){
                if (order[i]!=1){
                    return false;
                }
            }
        }
        else if(order[0]==1){
            for (int i=0;i<order.size();i+=2){
                if (order[i]!=1){
                    return false;
                }
            }
            for (int i=1;i<order.size();i+=2){
                if (order[i]!=0){
                    return false;
                }
            }
        }
        return true;
    }
};