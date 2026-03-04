class Solution {
public:
    int findComplement(int num) {
        string binary = "";
        while (num > 0) {
            binary += (num % 2) + '0';
            num /= 2;
        }
        reverse(binary.begin(), binary.end());
        for(int i=0;i<binary.size();i++){
            if (binary[i]=='1'){
                binary[i]='0';
            }
            else{
                binary[i]='1';
            }
        }
        int decimal = 0;
        for (int i = 0; i < binary.length(); i++) {
            decimal = decimal * 2 + (binary[i] - '0');
        }
        return decimal;
    }
};