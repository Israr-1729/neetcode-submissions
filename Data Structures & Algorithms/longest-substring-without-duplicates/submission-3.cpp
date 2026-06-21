class Solution {
public:

    bool doesNotContainDuplicate(string &s)
    {
        vector<int> freq(256);
        int size = s.size();
        for(int i = 0; i<size; i++)
        {
            freq[s[i]]++;
        }
        for(int i = 0; i<256; i++)
        {
            if(freq[i]>1)
            return false;
        }
        return true;
    }
    int lengthOfLongestSubstring(string s) {
        int maxLength = 1;
        int size = s.size();
        if(size==0)
        return 0;
        for(int i = 0; i<size; i++)
        {
            for(int j = i; j<size; j++)
            {
                string subst = s.substr(i, j-i+1);
                if(doesNotContainDuplicate(subst) && j-i+1>maxLength)
                maxLength = j-i+1;
            }
        }
        return maxLength;
    }
};
