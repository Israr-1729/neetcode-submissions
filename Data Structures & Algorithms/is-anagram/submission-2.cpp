class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26);
        for(char c : s)
        freq[c-'a']++;

        for(char c : t)
        freq[c-'a']--;

        for(int a : freq)
        {
            if(a!=0)
            return false;
        }
        return true;
    }
};
