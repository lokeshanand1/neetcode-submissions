class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> freq;
        for(char i:s){
            freq[i]++;
        }
        for(char i:t){
            freq[i]--;
        }
        for(auto k:freq){
            if(k.second!=0){
                return false;
            }
        }
        return true;


    }
};
