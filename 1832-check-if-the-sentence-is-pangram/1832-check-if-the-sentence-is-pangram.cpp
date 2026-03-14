class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> freq;
        for (int i=0;i<sentence.size();i++){
            freq[sentence[i]]++;
        }
        for (int i=97;i<=122;i++){
            if (freq[(char) i]==0){
                return false;
            }
        }
        return true;
    }
};