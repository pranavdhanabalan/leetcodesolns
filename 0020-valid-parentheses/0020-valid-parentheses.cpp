class Solution {
public:
    bool isValid(string s) {
        vector<char> order;
        for (int i=0;i<s.size();i++){
            if (s[i]=='('||s[i]=='{'||s[i]=='['){
                order.push_back(s[i]);
            }
            else {
                if (order.empty()){
                    return false;
                }
                if (((order.back()=='(')&&(s[i]==')'))||((order.back()=='[')&&(s[i]==']'))||((order.back()=='{')&&(s[i]=='}')))
                    order.pop_back();
                else 
                    return false;
            }
        }
        return order.empty();
    }
};