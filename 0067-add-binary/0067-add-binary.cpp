class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size() - 1,j=b.size()-1; char buffer='0';
        string ans;
        while(i >= 0 && j >= 0){
            if (((a[i]=='0'&&b[j]=='1')||(a[i]=='1'&&b[j]=='0'))&&(buffer=='0')){
                ans+='1';
                buffer='0';
            }
            else if (((a[i]=='0'&&b[j]=='1')||(a[i]=='1'&&b[j]=='0'))&&(buffer=='1')){
                ans+='0';
                buffer='1';
            }
            else if(a[i]=='0'&&b[j]=='0'){
                if(buffer=='0'){
                    ans += '0';
                }
                else{
                    ans += '1';
                    buffer = '0';
                }
            }
            else if(a[i]=='1'&&b[j]=='1'){
                if(buffer=='0'){
                    ans += '0';
                    buffer = '1';
                }
                else{
                    ans += '1';
                    buffer = '1';
                }
            }
            i--;j--;
        }
        if (i>=0){
            while(i>=0){
                if ((a[i]=='0'&&buffer=='1')||(a[i]=='1'&&buffer=='0')){
                    ans+='1';
                    buffer='0';
                }
                else if(a[i]=='1'&&buffer=='1'){
                    ans+='0';
                    buffer='1';
                }
                else{
                    ans+='0';
                }
                i--;
            }
        }
        if (j>=0){
            while(j>=0){
                if ((b[j]=='0' && buffer=='1') || (b[j]=='1' && buffer=='0')) {
                    ans += '1';
                    buffer = '0';
                }
                else if (b[j]=='1' && buffer=='1') {
                    ans += '0';
                    buffer = '1';
                }
                else {
                    ans += '0';
                }
                j--;
            }
        }
        if(buffer == '1')
            ans += '1';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};